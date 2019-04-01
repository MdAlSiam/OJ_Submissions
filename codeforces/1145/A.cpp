#include <bits/stdc++.h>
using namespace std;

bool isSorted(int* ara, int lo, int hi){
    for(int i = lo+1; i <= hi; i++){
        if(ara[i] < ara[i-1]) return false;
    }
    return true;
}

int findans(int* ara, int lo, int hi){
    int length = hi - lo + 1;
    if(isSorted(ara, lo, hi)) return length;
    if(lo == hi) return 1;

    int mid = lo + (hi - lo) / 2;

    int ret1 = findans(ara, lo, mid);
    int ret2 = findans(ara, mid+1, hi);

    return max(ret1, ret2);
}

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int ara[n+3];
        for(int i = 1; i <= n; i++){
            scanf("%d", ara+i);
        }
        int ans = findans(ara, 1, n);
        printf("%d\n", ans);
    }
}
