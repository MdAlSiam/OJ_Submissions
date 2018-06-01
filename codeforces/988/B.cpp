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

bool compare(string x, string y){
    return x.length() < y.length();
}

int main(){
    ll n;
    while(scl(n) == 1){
        getchar();
        string x[n+1];
        ll i;
        for(i = 0; i < n; i++) cin >> x[i];
        sort(x, x+n, compare);
        bool ok = true;
        for(i = 1; i < n; i++){
            if(x[i].find(x[i-1]) != string::npos) continue;
            else{ok = false; break;}
        }
        if(ok){
            printf("YES\n");
            for(i = 0; i < n; i++) cout << x[i] << endl;
        }
        else printf("NO\n");
    }
	return 0;
}
