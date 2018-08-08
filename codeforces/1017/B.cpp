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
		char a[n+1], b[n+1], c[n+1];
		scanf("%s", &a);
		scanf("%s", &b);


		ll k = 0, c0 = 0, c1 = 0;

		For(i, 0, n) {if(a[i] == '0') c0++; else c1++;}


		For(i, 0, n){
			if(a[i] == '0' && b[i] == '0') {
				k += c1;
				if(c0) c0--;
			}
			if(a[i] == '1' && b[i] == '0') {
				k += c0;
				if(c1) c1--;
			}
		}

		printf("%lld\n", k);
	}
	return 0;
}


