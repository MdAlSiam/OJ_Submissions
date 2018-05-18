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
        char s[n+1];
        scanf("%s", &s);
        For(i, 0, n){
            if((s[i] == '0' && s[i-1] != '1' && s[i+1] != '1') || (s[i+1] == '1' && s[i] == '1') || (n == 1 && s[0] == '0' )){
                printf("No\n");
                return 0;
            }
        }
        printf("Yes\n");
    }
	return 0;
}


