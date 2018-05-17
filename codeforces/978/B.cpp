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
        char a[n+1];
        scanf("%s", &a);
        ll temp = 0;
        ll ans = 0;
        For(i, 0, n){
            if(a[i] == 'x') temp++;
            else{
                if(temp > 2) ans += (temp - 2);
                temp = 0;
            }
            if(i == n-1){
                if(temp > 2) ans += (temp - 2);
                temp = 0;
            }
        }
        printf("%lld\n", ans);
	}
	return 0;
}


