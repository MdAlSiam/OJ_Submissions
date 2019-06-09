#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll t;
    scanf("%lld", &t);

    while(t--){
        ll n;
        scanf("%lld", &n);

        ll ans = 0;

        //ll ara[n+5];
        ll zero, one, two;
        zero = one = two = 0;

        for(ll i = 0; i < n; i++){
            ll t;
            scanf("%lld", &t);

            if(t % 3 == 0) zero++;
            else if(t % 3 == 1) one++;
            else two++;
        }

        ans += zero;

        ll jora = min(one, two);

        ans += jora;

        one -= jora;
        two -= jora;

        if(one != 0) ans += (one / 3);
        if(two != 0) ans += (two / 3);

        printf("%lld\n", ans);
    } /// test
}
