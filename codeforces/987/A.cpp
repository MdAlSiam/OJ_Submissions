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
    char a[10] = "Power";
    char b[10] = "Time";
    char c[10] = "Space";
    char d[10] = "Soul";
    char e[10] = "Reality";
    char f[10] = "Mind";
    char x[10];
	ll n;
	scl(n);
	ll temp = n;
	while(n--){
        scanf(" %s", x);
        if(x[0] == 'p') a[0] = 'x';
        if(x[0] == 'g') b[0] = 'x';
        if(x[0] == 'b') c[0] = 'x';
        if(x[0] == 'o') d[0] = 'x';
        if(x[0] == 'r') e[0] = 'x';
        if(x[0] == 'y') f[0] = 'x';
	}
	printf("%lld\n", 6 - temp);

	if(a[0] != 'x') printf("%s\n", a);
	if(b[0] != 'x') printf("%s\n", b);
	if(c[0] != 'x') printf("%s\n", c);
	if(d[0] != 'x') printf("%s\n", d);
	if(e[0] != 'x') printf("%s\n", e);
	if(f[0] != 'x') printf("%s\n", f);
	return 0;
}
