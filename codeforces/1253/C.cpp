#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, m;
    scanf("%lld %lld", &n, &m);
    ll a[n+4], cs[n+4], ans[n+4];
    a[0] = cs[0] = ans[0] = 0;
    for(ll i = 1; i <= n; i++)
        scanf("%lld", a+i);
    sort(a+1, a+n+1);
    for(ll i = 1; i <= n; i++)
        cs[i] = cs[i-1]+a[i];
    for(ll i = 1; i <= n; i++){
        ans[i] = cs[i];
        if(i > m) ans[i] += ans[i-m];
    }
    for(ll i = 1; i <= n; i++)
        printf(i == n ? "%lld\n":"%lld ", ans[i]);
}
