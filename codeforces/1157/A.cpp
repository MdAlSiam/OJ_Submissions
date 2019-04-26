#include <bits/stdc++.h>
using namespace std;

#define ll long long int

map <ll, ll> mp;

ll f(ll n){
    while(n % 10 == 0)
        n /= 10;
    return n;
}

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        ll kount = 1;
        mp.clear();
        mp[n] = 1;
        while(1){
            n++;
            n = f(n);
            if(mp[n] >= 1)
                break;
            kount++;
            mp[n]++;

        }
        printf("%lld\n", kount);
    }
}
