#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, i, x, y, koin;
    while(scanf("%lld", &n) == 1){
        koin = 0;
        x = 0;
        y = 0;
        char ara[n+1];
        scanf("%s", &ara);
        for(i = 0; i < (n+1); i++){
            if(ara[i] == 'U'){
                y++;
                if(x == y){
                    if(ara[i+1] == 'U') koin++;
                }
            }
            if(ara[i] == 'R'){
                x++;
                if(x == y){
                    if(ara[i+1] == 'R') koin++;
                }
            }
        }
        printf("%d\n", koin);
    }
    return 0;
}
