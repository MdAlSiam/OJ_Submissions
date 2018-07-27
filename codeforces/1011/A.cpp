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
	ll n, k;
	while(scanf("%lld %lld", &n, &k) == 2){
        string x;
        cin >> x;
        ll len = x.length();
        Sort(x);
        For(i, 0, len) x[i] = x[i] - 'a' + 1;
        ll sum = x[0];
        ll kount = 1;
        ll prev = 0, curr;
        if(kount != k){
            for(ll i = 1; i < len; i++){
                curr = i;
                if(x[curr] > (x[prev]+1)){
                    sum += x[curr];
                    prev = curr;
                    kount++;
                    if(kount == k) break;
                }
            }
        }
        if(kount != k) printf("-1\n");
        else printf("%lld\n", sum);
	}
	return 0;
}
