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
	string x;
	while(cin >> x){
		ll len = x.length();
		x[len] = 'b';
		ll ok = 1;
		for(ll i = 0; i < len; i++){
			if(x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' ||  x[i] == 'u' || x[i] == 'n' )
				continue;
			else{
				if(x[i+1] == 'a' || x[i+1] == 'e' || x[i+1] == 'i' || x[i+1] == 'o' || x[i+1] == 'u' )
					continue;
				else{printf("NO\n"); ok = 0; break;}
			}
		}
		if(ok) printf("YES\n");
	}
	return 0;
}
