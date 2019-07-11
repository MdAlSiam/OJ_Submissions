#include <bits/stdc++.h>
using namespace std;

int tree[2000000];
int ara[100005];
int candy[2000000];

void build_seg_tree(int node, int lo, int hi){

    if(lo == hi){
        tree[node] = ara[lo];
        candy[node] = 0;
        return;
    }

    int mid = lo + (hi - lo) / 2;

    build_seg_tree(2*node, lo, mid);
    build_seg_tree(2*node+1, mid+1, hi);

    tree[node] = tree[2*node] + tree[2*node+1];
    candy[node] = candy[2*node] + candy[2*node+1] + (tree[node] >= 10);
    tree[node] %= 10;

}

pair<int, int> query(int node, int lo, int hi, int start, int stop){

    if(stop < lo || hi < start) return {0, 0};

    if(start <= lo && hi <= stop) return {tree[node], candy[node]};

    int mid = lo + (hi - lo) / 2;
    pair<int, int> left_candy = query(2*node, lo, mid, start, stop);
    pair<int, int> right_candy = query(2*node+1, mid+1, hi, start, stop);

    int total = left_candy.first+right_candy.first;
    return {total % 10,
            left_candy.second + right_candy.second+ (total >= 10)};

}

int main(){

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", ara+i);
    }

    build_seg_tree(1, 1, n);

    int q;
    scanf("%d", &q);

    while(q--){
        //candies = 0;
        int start, stop;
        scanf("%d %d", &start, &stop);
        pair <int, int> ans = query(1, 1, n, start, stop);
        printf("%d\n", ans.second);
    }

}
