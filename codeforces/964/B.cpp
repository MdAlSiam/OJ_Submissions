#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1)
#define pb push_back
#define sort(x) sort(x.begin(), x.end())
#define for(i, x, y) for(ll i = x; i < y; i++)

int main(){
	ll n, a, b, c, t;
	while(scanf("%lld %lld %lld %lld %lld", &n, &a, &b, &c, &t) == 5){
		ll ara[n+1];
		for(i, 0, n) scl(ara[i]);
		ll ans1 = a*n;
		ll ans2 = n*a;
		for(i, 0, n) ans2 += ((t - ara[i]) * (c-b));
		(ans1 >= ans2) ? printf("%lld\n", ans1) : printf("%lld\n", ans2);
	}
	return 0;
}

