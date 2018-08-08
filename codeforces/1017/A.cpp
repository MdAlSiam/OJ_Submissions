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
		ll ara[n], a, b, c, d, sum, sum1;
		For(i, 0, n){
			scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
			sum = a + b + c + d;
			ara[i] = sum;
			//cout << i << " xx " << sum << endl;
			if(i == 0) sum1 = sum;
		}

		//cout << sum1 << "s1" << endl;

		sort(ara, ara+n);

		//For(i, 0, n) cout << ara[i] << "n" << endl;

		for(ll i = n-1; i >= 0; i--){
			if(ara[i] == sum1){
				printf("%lld\n", n-i);
				break;
			}
		}
	}
	return 0;
}

