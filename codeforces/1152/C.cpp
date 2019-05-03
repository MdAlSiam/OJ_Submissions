#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);

    ll dif = abs(a-b);

    vector<ll> v;

    for(ll i = 1; i*i <= dif; i++){
        if(dif % i == 0){
            v.push_back(i);
            if(i*i != dif) v.push_back(dif/i);
        }
    }

    ll ans = (1LL<<62);
    ll vl = 0;

    sort(v.begin(),v.end());

    for(ll i = 0; i < v.size(); i++){
        ll nr = v[i];

        if(a%nr != b%nr) continue;

        if(a%nr == 0){
            ll pans = (a*b) / __gcd(a,b);
            if(pans < ans){
                ans = pans;
                vl = 0;
            }
        }
        else{
            ll k = nr - a % nr;
            ll pans =
             ((a + k) * (b + k))
            / __gcd((a + k) , (b + k));
            if(pans < ans){
                ans = pans;
                vl = k;
            }
        }
    }

    printf("%lld\n", vl);
}
