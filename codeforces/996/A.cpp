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
	ll n, kount;
	while(scl(n) == 1){
		kount = 0;
		while(n != 0){
			if(n >= 100){
				kount += (n / 100);
				n = n % 100;
			}
			else if(n >= 20){
				kount += (n / 20);
				n = n % 20;
			}
			else if(n >= 10){
				kount += (n / 10);
				n = n % 10;
			}
			else if(n >= 5){
				kount += (n / 5);
				n = n % 5;
			}
			else if(n >= 1){
				kount += (n / 1);
				n = n % 1;
			}
		}
		printf("%lld\n", kount);
	}
	return 0;
}


