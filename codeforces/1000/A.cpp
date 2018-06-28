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

map <string, ll> mp;

int main(){
	ll n;
	while(scl(n) == 1){
		string x;
		ll kount = 0;
		For(i, 0, n){
			cin >> x;
			mp[x]++;
		}
		For(i, 0, n){
			cin >> x;
			if(mp[x] >= 1) mp[x]--;
			else kount++;
		}
		cout << kount << endl;
	}
	return 0;
}

