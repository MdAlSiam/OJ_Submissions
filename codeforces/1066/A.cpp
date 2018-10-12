#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t;
    scanf("%lld", &t);
    while(t--){
        ll L, v, l, r;
        scanf("%lld %lld %lld %lld", &L, &v, &l, &r);

        ll ans;

        ans  = L / v;

        ll endd = r / v;
        ll startt = (l-1) / v;

        ans -= (endd - startt);

        printf("%lld\n", ans);
    }
}
