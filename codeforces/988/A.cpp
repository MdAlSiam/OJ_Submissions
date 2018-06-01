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
	ll n, tn;
	while(scanf("%lld %lld", &n, &tn) == 2){
        ll ara[n+1];
        map <ll, ll> mp;
        map <ll, ll> :: iterator it;
        for(ll i = 0; i < n; i++){
            scl(ara[i]);
            mp[ara[i]]++;
        }
        if(mp.size() >= tn){
            printf("YES\n");
            it = mp.begin();
            ll k = 1;
            for(it = mp.begin(); k <= tn; it++){
                for(ll z = 0; z < n; z++){
                    if(ara[z] == it->first){
                        printf("%lld ", z+1);
                        k++;
                        break;
                    }
                }
            }
            printf("\n");
        }
        else printf("NO\n");
	}
	return 0;
}
