#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    while(scanf("%d %d", &n, &m) == 2){
        int odd1 = 0, even1 = 0, even2 = 0, odd2 = 0;
        for(int i = 0; i < n; i++){
            int t;
            scanf("%d", &t);
            if(t & 1) odd1++;
            else even1++;
        }
        for(int i = 0; i < m; i++){
            int t;
            scanf("%d", &t);
            if(t & 1) odd2++;
            else even2++;
        }
        int ans = min(odd1, even2) + min(even1, odd2);
        printf("%d\n", ans);
    }///eoc
}
