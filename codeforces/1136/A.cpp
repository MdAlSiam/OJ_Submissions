#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        ll start[n+2], stop[n+2];
        for(ll i = 1; i <= n; i++){
            scanf("%lld %lld", &start[i], &stop[i]);
        }
        ll cut, ans;
        scanf("%lld", &cut);
        for(ll i = 1; i <= n; i++){
            if(start[i] <= cut && cut <= stop[i]){
                ans = n - (i-1);
                break;
            }
        }
        printf("%lld\n", ans);
    }
}
