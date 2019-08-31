#include <bits/stdc++.h>
using namespace std;

int ara[150005], tree[600005];

void build(int lo, int hi, int node){
    if(lo == hi){
        tree[node] = ara[lo];
        return;
    }

    int mid = lo + ((hi - lo) / 2);
    int left_node = node*2;
    int right_node = left_node + 1;

    build(lo, mid, left_node);
    build(mid+1, hi, right_node);

    tree[node] = min(tree[left_node], tree[right_node]);
}

int query(int lo, int hi, int start, int stop, int node){

    if(start > hi || stop < lo) return INT_MAX;

    if(start <= lo && hi <= stop){
        return tree[node];
    }

    int mid = lo + ((hi - lo) / 2);
    int left_node = node*2;
    int right_node = left_node + 1;

    int ret1 = query(lo, mid, start, stop, left_node);
    int ret2 = query(mid+1, hi, start, stop, right_node);

    return min(ret1, ret2);

}

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int n;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", ara+i);
        }

        build(1, n, 1);

        //for(int i = 1; i <= n+n+n; i++){
            ////cout << tree[i] << " ";
        //}

        int kount = 0;

        for(int i = 1; i < n; i++){
            int mini = query(1, n, i+1, n, 1);
            //cout << ara[i] << " -> " << mini << endl;
            if(mini < ara[i]) kount++;
        }

        printf("%d\n", kount);
    } ///eot
}
