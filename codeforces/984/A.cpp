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
	ll n, index;
	while(scl(n) == 1){
        ll ara[n+1];
        For(i, 0, n) scl(ara[i]);
        sort(ara, ara+n);
        if(n % 2 == 1) index = n / 2;
        else index = (n / 2) - 1;
        printf("%lld\n", ara[index]);
	}
	return 0;
}
