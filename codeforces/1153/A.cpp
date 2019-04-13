#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, t;
    scanf("%lld %lld", &n, &t);
    ll f[n+10], d[n+10];

    for(ll i = 1; i <= n; i++){
        scanf("%lld %lld", &f[i], &d[i]);
    }

    ll ans = LONG_LONG_MAX;
    ll in = -1;

    for(ll i = 1; i <= n; i++){
        if(f[i] == t){
            ans = f[i];
            in = i;
            break;
        }

        for(ll j = f[i];; j+=d[i]){
            if(j < ans && j >= t){
                ans = j;
                in = i;
                break;
            }
            if(j > ans) break;
        }
    }

    printf("%lld\n", in);
}
