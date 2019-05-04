#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ll n, mx_ht, rs;
    scanf("%lld %lld %lld", &n, &mx_ht, &rs);

    ll val[n+4], profit = 0;
    for(ll i = 1; i <= n; i++)
        val[i] = mx_ht;

    for(ll i = 0; i < rs; i++){
        ll lo, hi, limit;
        scanf("%lld %lld %lld", &lo, &hi, &limit);
        for(ll j = lo; j <= hi; j++){
            if(limit < val[j])
                val[j] = limit;
        }
    }

    for(ll i = 1; i <= n; i++)
        profit += val[i]*val[i];

    printf("%lld\n", profit);

}

