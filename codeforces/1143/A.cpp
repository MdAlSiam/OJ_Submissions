#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        ll ara[n+3];
        ll k0, k1;
        k0 = k1 = 0;
        for(ll i = 0; i < n; i++){
            ll t;
            scanf("%lld", &t);
            ara[i] = t;
            if(t == 0) k0++;
            else k1++;
        }
        ll ans;
        for(ll i = 0; i < n; i++){
            if(ara[i] == 0) k0--;
            else k1--;
            if(k0 == 0 || k1 == 0){
                ans = i+1;
                break;
            }
        }
        printf("%lld\n", ans);
    }
}

