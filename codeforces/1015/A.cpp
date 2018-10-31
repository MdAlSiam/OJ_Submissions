#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, m;
    while(scanf("%lld %lld", &n, &m) == 2){
        ll ara[m+5];
        for(int i = 0; i <= m; i++) ara[i] = 0;
        while(n--){
            ll l, r;
            scanf("%lld %lld", &l, &r);
            ara[l]++;
            ara[r+1]--;
        }
        ll kount = 0;
        for(int i = 1; i <= m; i++){
            ara[i] += ara[i-1];
            if(ara[i] == 0) kount++;
        }
        printf("%lld\n", kount);
        for(int i = 1; i <= m; i++)
            if(ara[i] == 0) printf("%d ", i);
        printf("\n");
    }
}
