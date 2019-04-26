#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
//while(1){
    ll n;
    cin >> n;
    string x;
    cin >> x;
    ll ara[n+3];
    for(ll i = 0; i < n; i++)
        ara[i] = x[i] - '0';

    map <ll, ll> mp;
    for(ll i = 1; i <= 9; i++){
        ll t;
        scanf("%lld", &t);
        mp[i] = t;
    }

    bool changed = false;
    for(ll i = 0; i < n; i++){
        if(mp[ara[i]] > ara[i]){
            ara[i] = mp[ara[i]];
            changed = true;
        }
        else if(!changed){}
        else if(changed && mp[ara[i]] == ara[i]){}
        else break;
    }

    for(ll i = 0; i < n; i++)
        printf(i == n-1 ? "%lld\n" : "%lld", ara[i]);
//}
}

