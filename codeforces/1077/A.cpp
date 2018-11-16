#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll test;
    scanf("%lld", &test);
    while(test--){
        ll a, b, k;
        scanf("%lld %lld %lld", &a, &b, &k);
        ll ajabe = k / 2;
        if(ajabe*2 != k) ajabe++;
        ll bjabe = k - ajabe;
        ll ans = ajabe*a - bjabe*b;
        printf("%lld\n", ans);
    }
}
