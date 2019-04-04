#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    scanf("%lld", &n);

    ll kount[200005];
    memset(kount, 0, sizeof(kount));

    ll ara[n+5];
    for(ll i = 0; i < n; i++){
        scanf("%lld", ara+i);
        kount[ara[i]]++;
    }

    ll max_occured, curr_kount = -1;
    for(ll i = 0; i < 200005; i++){
        if(kount[i] > curr_kount){
            curr_kount = kount[i];
            max_occured = i;
        }
    }

    printf("%lld\n", n-kount[max_occured]);
    bool firstfound = true;

    for(ll i = 0; i < n; i++){
        if(ara[i] == max_occured){
            for(ll j = i-1; j > -1 && firstfound; j--){
                if(ara[j] == max_occured) break;
                else if(ara[j] < ara[i])
                    printf("1 %lld %lld\n", j+1, j+1+1);
                else printf("2 %lld %lld\n", j+1, j+1+1);
            }

            for(ll j = i+1; j < n; j++){
                if(ara[j] == max_occured) break;
                else if(ara[j] < ara[i])
                    printf("1 %lld %lld\n", j+1, j-1+1);
                else printf("2 %lld %lld\n", j+1, j-1+1);
            }

            firstfound = false;
        }
    }
}
