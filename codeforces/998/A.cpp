#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

int main(){
	ll n;
	while(scl(n) == 1){
		ll ara[n+1];
		for(ll i = 0; i < n; i++) {
			scanf("%lld", ara+i);
			if(i == 0) continue;
			ara[i] += ara[i-1];
		}
		for(ll i = n-1; i >= 0; i--){
			if((ara[n-1] - ara[i-1]) != ara[i-1]){
				if(i == 0) {printf("-1\n"); break;}
				printf("%lld\n", i);
				for(ll k = 1; k <= i; k++) printf("%lld ", k);
				printf("\n");
				break;
			}
		}
	}
	return 0;
}


