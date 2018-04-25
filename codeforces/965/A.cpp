/*#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>*/
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

int main(){
	dd k, n, s, p;
	while(scanf("%lf %lf %lf %lf", &k, &n, &s, &p) == 4){
		dd temp1 = ceil(n/s); //printf("%lf\n", temp1);
		dd temp2 = temp1*k; //printf("%lf\n", temp2);
		dd temp3 = ceil(temp2 / p); //printf("%lf\n", temp3);
		ll t4 = temp3*1;
		printf("%lld\n", t4);
	}
	return 0;
}

