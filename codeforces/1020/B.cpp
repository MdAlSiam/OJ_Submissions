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
    scl(n);

    ll p[n+1];
    ll mark[n+1];

    ll a;

    For(i, 0, n) {scl(p[i]); p[i]--;}

    For(i, 0, n) mark[i] = 0;

    for(ll i = 0; i < n; i++){
        a = i;
        For(i, 0, n) mark[i] = 0;
        while(1){
            mark[a]++;
            if(mark[a] >= 2){
                printf("%lld ", a+1);
                break;
            }
            a = p[a];
        }
    }
	return 0;
}

