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
	ll n, m, kount;
	while(scanf("%lld %lld", &n, &m) == 2){
        ll ara[110] = {0};

        ll day = ceil(m/n);

        For(i, 0, m){
            ll x;
            scl(x);
            ara[x]++;
        }

        bool solved = false;

        for(ll d = day; d > 0; d--){
            kount = 0;
            for(ll i = 0; i < 103; i++){
                if(ara[i] > 0 && ara[i] >= d){
                    ll total_mul = ara[i] / d;
                    kount += total_mul;
                    if(kount >= n){
                        cout << d << endl;
                        solved = true;
                        break;
                    }
                }
            }
            if(solved) break;
        }

        if(!solved) cout << "0" << endl;
	}
	return 0;
}

