#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
//#define scl(x,y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scd(x, y) scanf("%lf %lf", &x, &y)
#define pb push_back

#define pi acos(-1.00)
#define eps 0.0000000001
#define inf LONG_LONG_MAX
#define mod 1000000007

ll bigpow(ll b, ll p){
    if(p == 0) return 1;
    ll ret = bigpow(b, p/2);
    if(p & 1) return ret*ret*b;
    return ret*ret;
}

int main(){
    ll n;
    scl(n);
    ll ara[n+3];
    for(ll i = 0; i < n; i++) scl(ara[i]);
    sort(ara, ara+n);
    ll kount = 0;
    for(ll i = 0; i < n-1; i += 2){
        kount += (ara[i+1] - ara[i]);
    }
    printf("%lld\n", kount);
    return 0;
}
