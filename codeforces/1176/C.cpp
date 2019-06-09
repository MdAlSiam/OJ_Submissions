#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    scanf("%lld", &n);

    ll kount[50];
    memset(kount, 0, sizeof(kount));

    for(ll i = 0;  i < n; i++){
        ll t;
        scanf("%lld", &t);

        if(t == 4){
            kount[4]++;
        }
        else if(t == 8){
            if(kount[4] > 0){
                kount[4]--;
                kount[8]++;
            }
        }
        else if(t == 15){
            if(kount[8] > 0){
                kount[8]--;
                kount[15]++;
            }
        }
        else if(t == 16){
            if(kount[15] > 0){
                kount[15]--;
                kount[16]++;
            }
        }
        else if(t == 23){
            if(kount[16] > 0){
                kount[16]--;
                kount[23]++;
            }
        }
        else if(t == 42){
            if(kount[23] > 0){
                kount[23]--;
                kount[42]++;
            }
        }
    }

    ll ans = n - kount[42]*6;

    printf("%lld\n", ans);
}
