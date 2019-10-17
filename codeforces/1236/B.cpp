#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define mod 1000000007

ll bigmod(ll b, ll p, ll m){
    if(p == 0) return 1;
    ll ret = bigmod(b, p/2, m);
    ret = ((ret%m)*(ret%m))%m;
    if(p & 1) ret = (ret*b)%m;
    return ret;
}

int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);

    ll temp = bigmod(2, m, mod) - 1;

    ll ans = bigmod(temp, n, mod);

    printf("%lld\n", ans);
}
