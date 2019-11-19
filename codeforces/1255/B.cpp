#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n, m, a, b, x, y, z, t, test;

int main(){

    scanf("%lld", &test);

    while(test--){

        scanf("%lld %lld", &n, &m);
        ll cost[n+5];
        for(ll i = 1; i <= n; i++){
            scanf("%lld", cost+i);
        }

        ll ans = 0, kount = 0, mini = INT_MAX, minu, minv;

        for(ll i = 1; i <= n; i++){
            if(i == n){
                ll temp = cost[i] + cost[1];
                ans += temp;
                if(temp < mini){mini = temp; minu = i; minv = 1;}
                kount++;
            }else{
                ll temp = cost[i] + cost[i+1];
                ans += temp;
                if(temp < mini){mini = temp; minu = i; minv = i+1;}
                kount++;
            }
        }

        if(n == 2 || kount > m) {
            ans = -1;
            printf("%lld\n", ans);
            continue;
        }

        ans += (m - kount)*mini;

        printf("%lld\n", ans);

        ll kk = m - kount;
        for(ll i = 1; i <= n; i++){
            if(i == n) printf("%lld %lld\n", i, 1);
            else printf("%lld %lld\n", i, i+1);}
        while(kk--) printf("%lld %lld\n", minu, minv);

    } ///eot
}