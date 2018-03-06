#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, c, b;
    while(scanf("%lld", &n) == 1){
        ll ara[n];
        for(ll i = 0; i < n; i++)
            scanf("%lld", &ara[i]);
        ///sort(ara, ara+n);
        c = 0, b = 0;
        for(ll i = 0; i < n; i++){
            if(ara[i] < 0) c += ara[i];
            else b+= ara[i];
        }
        printf("%lld\n", b - c);
    }
    return 0;
}
