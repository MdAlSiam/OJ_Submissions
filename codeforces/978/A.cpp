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
        ll ara[n+1];
        map <ll, ll> uniq;
        For(i, 0, n){
            scl(ara[i]);
            uniq[ara[i]]++;
        }
        cout << uniq.size() << endl;
        For(i, 0, n){
            if(uniq[ara[i]] == 1){
                cout << ara[i] << " ";
            }
            else uniq[ara[i]]--;
        }
        cout << endl;
	}
	return 0;
}

