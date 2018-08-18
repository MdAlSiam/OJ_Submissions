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
	ll test;
	scl(test);

	while(test--){
        ll n;
        scl(n);
        char a[n+2];
        scanf("%s", &a);

        ll lo = 0, hi = n-1, palin = 1;

        while(lo < hi){
            //if(a[lo] == a[hi]) {}
            /*else*/ //if(a[lo] + 1 == a[hi]){}
            //else if(a[lo] - 1 == a[hi]){}
            //else if(a[hi] + 1 == a[lo]){}
            //else if(a[lo] - 1 == a[lo]){}

            /*else*/ if(a[lo] + 1 == a[hi] + 1) {}

            else if(a[lo] + 1 == a[hi] - 1){}

            else if(a[lo] - 1 == a[hi] + 1) {}

            else if(a[lo] - 1 == a[hi] - 1) {}

            else {palin = 0; break;}
            lo++; hi--;
        }

        if(palin) printf("YES\n");
        else printf("NO\n");
	}
	return 0;
}
