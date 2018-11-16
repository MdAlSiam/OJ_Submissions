#include <bits/stdc++.h>
using namespace std;

#define ll long long int

map <ll, ll> amarmap;

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        amarmap.clear();
        ll ara[n+1];
        ll ans[n+1], ansindex = 0;
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            scanf("%lld", ara+i);
            sum += ara[i];
            amarmap[ara[i]]++;
        }
        for(ll i = 0; i < n; i++){
            ll temp = sum - ara[i];
            if(temp & 1) continue;
            ll thakalagbe = temp / 2;
            if(ara[i] == thakalagbe && amarmap[thakalagbe] == 1) continue;
            else if(ara[i] == thakalagbe && amarmap[thakalagbe] >= 2) ans[ansindex++] = i+1;
            else if(amarmap[thakalagbe] >= 1) ans[ansindex++] = i+1;
        }
        printf("%lld\n", ansindex);
        for(int i = 0; i < ansindex; i++) printf("%lld ", ans[i]);
        printf("\n");
    }

}
