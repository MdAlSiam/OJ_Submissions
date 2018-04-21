#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define sort(x) sort(x.begin(), x.end())
#define for(i, x, y) for(ll i = x; i < y; i++)

int main(){
	string x;
	while(cin >> x){
		cout << x;
		reverse(x.begin(), x.end());
		cout << x << endl;
	}
	return 0;
}

