#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){ ll test; scanf("%lld", &test); while(test--){

    ll n;
    scanf("%lld", &n);

    char x[n][60];
    for(int i = 0; i < n; i++){
        //getchar();
        scanf(" %s", x[i]);
    }

    ll zerokount = 0, onekount = 0, oddpalin = 0;

    for(ll i = 0; i < n; i++){
        ll len = strlen(x[i]);
        if(len & 1) oddpalin++;
        for(ll j = 0; j < len; j++){
            if(x[i][j] == '1') onekount++;
            else zerokount++;
        }
    }


    //logix
    ll kombe=0;
    if(zerokount&1)if(oddpalin)oddpalin--;else kombe = 1;
    if(onekount&1)if(oddpalin)oddpalin--;else kombe = 1;


    printf("%lld\n", n-kombe);
    //printf("ans = %lld\n", n-kombe);

}}
