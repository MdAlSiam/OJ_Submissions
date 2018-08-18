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
	ll n, q;
	scanf("%lld %lld", &n, &q);

	ll eveninrow = (n+1) >> 1;
	ll oddinrow = n - eveninrow;

	ll maxeven = (((n*n)+1) >> 1);

	while(q--){
        ll ro, col;
        scl(ro);
        scl(col);

        ll sum = ro + col;

        if(!(sum & 1)){
            ll ans = 0;
            /*for(ll i = 1; i < ro; i++){
                if(i & 1) ans += eveninrow;
                else ans += oddinrow;
            }*/

            ans += eveninrow*(ro >> 1);
            ans += oddinrow*(ro -1 - (ro>>1));

            //cout << "ans b4 ro : " << ans << endl;
            ans += ((col+1) >> 1);

            printf("%lld\n", ans);
        }

        else{
            ll ans = 0;
            /*for(ll i = 1; i < ro; i++){
                if(i & 1) ans += oddinrow;
                else ans += eveninrow;
            }*/

            ans += oddinrow*(ro >> 1);
            ans += eveninrow*(ro -1 - (ro>>1));

            //cout << "ans b4 ro : " << ans << endl;
            ans += ((col+1) >> 1) + maxeven;

            printf("%lld\n", ans);
        }
	}
	return 0;
}

