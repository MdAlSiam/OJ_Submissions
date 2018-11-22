#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, sum;
    while(scanf("%lld %lld", &n, &sum) == 2){
        ll kount = 0;
        for(ll i = n; i >= 1; i--){
            if(sum == 0) break;
            if(sum / i == 0) continue;
            else{ kount += (sum/i); sum -= (sum/i)*i;}
        }
        printf("%lld\n", kount);
    }
}
