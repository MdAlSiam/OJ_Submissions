#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, t;
    scanf("%lld %lld", &n, &t);
        ll ans = LONG_LONG_MAX;
        ll in = -1;

        for(ll i = 1; i <= n; i++){
            ll first, duration;
            scanf("%lld %lld", &first, &duration);
            //if(first < t) continue;
            if(first == t){
                ans = first;
                in = i;
                break;
            }
            for(ll xx = first; ; xx += duration){
                if(xx < ans && xx >= t){
                    ans = xx;
                    in = i;
                    break;
                }
                if(xx >= ans)
                    break;
            }
        }
        printf("%lld\n", in);
    //}
}