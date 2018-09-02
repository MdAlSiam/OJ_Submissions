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
	ll n, midval;
	while(scanf("%lld %lld", &n, &midval) == 2){
		ll ara[n+1];
		for(ll i = 0; i < n; i++) scl(ara[i]);
		sort(ara, ara+n);

		//cout << "sorted: ";
		//for(ll i = 0; i < n; i++) cout << ara[i] << " ";
		//cout << endl;

		ll ans = 0;
		ll midpos = (n)/ 2;

		if(ara[midpos] <= midval){

			for(ll i = n-1; i >= midpos; i--){


				ll temp = midval - ara[i];
				if(temp < 0) temp = 0;

				//cout << " i = " << i << " temp = " << temp << endl;

				ans += temp;
			}

		}

		else{
			for(ll i = 0; i <= midpos; i++){


				ll temp = ara[i] - midval;
				if(temp < 0) temp = 0;

				//cout << " i = " << i << " temp = " << temp << endl;

				ans += temp;
			}
		}

		printf("%lld\n", ans);
	}
}


