#include <bits/stdc++.h>
using namespace std;

char str[100005];
int n;

int tab[300005][28];

void build(int node, int lo, int hi){

    for(int i = lo; i <= hi; i++){
        tab[node][str[i]-'a'] += 1;
    }

    if(lo == hi) return;

    int left_node = node+node;
    int right_node = left_node + 1;

    int mid = lo + ((hi - lo) >> 1);

    build(left_node, lo, mid);
    build(right_node, mid+1, hi);
}

void update(int node, int lo, int hi, int pos, char ch){

    if(pos < lo || hi < pos) return;

    if(lo == hi && lo == pos){
        tab[node][str[pos]-'a']--;
        str[lo] = ch;
        tab[node][str[pos]-'a']++;
        return;
    }

    tab[node][str[pos]-'a']--;

    int left_node = node+node;
    int right_node = left_node + 1;
    int mid = lo + ((hi - lo) >> 1);

    update(left_node, lo, mid, pos, ch);
    update(right_node, mid+1, hi, pos, ch);

    tab[node][str[pos]-'a']++;
}

int query(int node, int lo, int hi, int l, int r, int i){
    if(r < lo || hi < l) return 0;

    if(l <= lo && hi <= r) return tab[node][i];

    int left_node = node+node;
    int right_node = left_node + 1;
    int mid = lo + ((hi - lo) >> 1);

    int ret1 = query(left_node, lo, mid, l, r, i);
    int ret2 = query(right_node, mid+1, hi, l , r, i);

    return ret1 + ret2;
}

int main(){
    scanf(" %s", &str);
    n = strlen(str);

    build(1, 0, n-1);

    int q;
    scanf("%d", &q);

    while(q--){
        int type;
        scanf("%d", &type);

        if(type == 1){
            int pos; char ch;
            scanf("%d %c", &pos, &ch);
            update(1, 0, n-1, pos-1, ch);
        } else{
            int l, r;
            scanf("%d %d", &l, &r);
            int kount  = 0;
            for(int i = 0; i < 26; i++){
                int ret = query(1, 0, n-1, l-1, r-1, i);
                if(ret) kount++;
            }
            printf("%d\n", kount);
        }
    }

}
