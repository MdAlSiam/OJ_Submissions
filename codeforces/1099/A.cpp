#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll init_wt, lastpos;
    scanf("%lld %lld", &init_wt, &lastpos);
//    ll ans = init_wt + (lastpos*(lastpos+1)) / 2;
//    ll loss = 0;
//    for(ll i = 0; i < 2; i++){
//        ll a, b;
//        scanf("%lld %lld", &a, &b);
//        loss += a;
//    }
//    ans -= loss;
//    if(ans < 0)  ans = 0;

    ll w1, w2, h1, h2;
    scanf("%lld %lld", &w1, &h1);
    scanf("%lld %lld", &w2, &h2);

    ll ans = init_wt;

    for(ll i = lastpos; i >= 0; i--){
        ans += i;
        if(i == h1) ans -= w1;
        if(i == h2) ans -= w2;
        if(ans < 0) ans = 0;
    }
    printf("%lld\n", ans);
}
