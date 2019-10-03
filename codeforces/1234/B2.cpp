#define ll long long int
#include <bits/stdc++.h>
using namespace std;

int main(){

    ll n, k;
    scanf("%lld %lld", &n, &k);

    ll id[n+3];
    map<int, int> mp;
    for(ll i = 0; i < n; i++){
        scanf("%lld", id+i);
        mp[id[i]] = 0;
    }

    vector<ll> v;

    ll kount = 0;

    for(ll i = 0; i < n; i++){
        if(kount < k && mp[id[i]] == 0){
            v.push_back(id[i]);
            mp[id[i]] = 1;
            kount++;
        }
        else if(mp[id[i]] == 0){
            v.push_back(id[i]);
            mp[id[i]] = 1;
            kount++;
            mp[v[kount-k-1]] = 0;
        }
    }

    ll limit = min(kount, k), sz = v.size();
    printf("%lld\n", limit);
    for(ll i = sz-1; limit != 0; i--, limit--){
        printf("%lld ", v[i]);
    }
}
