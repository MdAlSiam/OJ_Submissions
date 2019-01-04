#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ara[19];
ll n;
ll dp[16][2750];

bool explore(ll index, ll sum){
    if(dp[index][sum] != -1) return dp[index][sum];
    if(index == n){
        if(sum == 0 || sum % 360 == 0) return true;
        return false;
    }

    bool ret1 = explore(index+1, sum+ara[index]);
    bool ret2 = explore(index+1, sum-ara[index]);

    return dp[index][sum] = ret1 | ret2;
}

int main(){
    memset(dp, -1, sizeof(dp));
    scanf("%lld", &n);
    for(ll i = 0; i < n; i++)
        scanf("%lld", ara+i);

    bool ok = explore(0, 0);
    if(ok) printf("YES\n");
    else printf("NO\n");
}
