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
	ll n, m;
	while(scanf("%lld %lld", &n, &m) == 2){
		ll cost[n+1], note[m+1];
		For(i, 0, n) scl(cost[i]);
		For(i, 0, m) scl(note[i]);
		ll noteindex = 0, kount = 0;
		for(ll i = 0; (i < n) && (noteindex < m); i++){
			if(cost[i] <= note[noteindex]){
				noteindex++;
				kount++;
			}
		}
		printf("%lld\n", kount);
	}
	return 0;
}
