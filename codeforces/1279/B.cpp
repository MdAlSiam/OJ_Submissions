#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){ll test; scanf("%lld", &test); while(test--){

    ll n, k;
    scanf("%lld %lld", &n, &k);

    int ara[n+6];
    for(ll i = 1; i <= n; i++){
        scanf("%lld", ara+i);
    }

    ll ans = 0, lagbe = k, in;

    ll maxi = -1;

    for(ll i = 1; i <= n; i++){

        if(ara[i] > maxi) {maxi = ara[i], in = i;}

        if(ara[i] <= lagbe) lagbe -= ara[i];
        else {ans = in; break;}
    }

    printf("%lld\n", ans);
}}
