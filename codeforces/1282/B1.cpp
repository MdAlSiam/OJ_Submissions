#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int n, tk, k;
        scanf("%d %d %d", &n, &tk, &k);
        int a[n+2], dp[n+2];
        a[0] = dp[0] = 0;
        for(int i = 1; i <= n; i++) scanf("%d", a+i);
        sort(a+1, a+n+1);
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(i < k) dp[i] = a[i]+dp[i-1];
            else dp[i] = a[i]+dp[i-k];
            if(dp[i] <= tk) ans = i;
        }
        printf("%d\n", ans);
    }
}
