#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;

    while(scanf("%lld", &n) == 1){
        char str[n+6];
        scanf(" %s", &str);

        ll g0, r0, g1, r1, g2, r2, c0 = 0, c1 = 0, c2 = 0;

        for(ll i = 0; i < n; i++){
            if(str[i] == '0') c0++;
            else if(str[i] == '1') c1++;
            else if(str[i] == '2') c2++;
        }

        ll limit = n / 3;

        if(c0 > limit){
            g0 = c0 - limit;
            r0 = 0;
        }
        else{
            r0 = limit - c0;
            g0 = 0;
        }

        if(c1 > limit){
            g1 = c1 - limit;
            r1 = 0;
        }
        else{
            r1 = limit - c1;
            g1 = 0;
        }

        if(c2 > limit){
            g2 = c2 - limit;
            r2 = 0;
        }
        else{
            r2 = limit - c2;
            g2 = 0;
        }

        //printf("%lld %lld %lld %lld\n", c0, c1, c2, limit);
        //printf("%lld %lld %lld %lld %lld %lld\n", g0, r0, g1, r1, g2, r2);

        ///000
        if(g0 > 0){

            for(ll i = n-1; i >= 0 && g0 && r2 ; i--){
                if(str[i] == '0'){
                    str[i] = '2';
                    g0--;
                    r2--;
                }
            }

            for(ll i = n-1; i >= 0 && g0 && r1 ; i--){
                if(str[i] == '0'){
                    str[i] = '1';
                    g0--;
                    r1--;
                }
            }
        }

        ///111
        if(g1 > 0){
            for(ll i = n-1; i >= 0 && g1 && r2 ; i--){
                if(str[i] == '1'){
                    str[i] = '2';
                    g1--;
                    r2--;
                }
            }
            for(ll i = 0; i < n && g1 && r0 ; i++){
                if(str[i] == '1'){
                    str[i] = '0';
                    g1--;
                    r0--;
                }
            }
        }///e

        ///2
        if(g2 > 0){

            for(ll i = 0; i < n && g2 && r0 ; i++){
                if(str[i] == '2'){
                    str[i] = '0';
                    g2--;
                    r0--;
                }
            }

            for(ll i = 0; i < n && g2 && r1 ; i++){
                if(str[i] == '2'){
                    str[i] = '1';
                    g2--;
                    r1--;
                }
            }
        }///e2

        printf("%s\n", str);
    }
}


