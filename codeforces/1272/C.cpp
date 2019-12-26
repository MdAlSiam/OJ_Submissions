#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ll n1, n2;
    scanf("%lld %lld", &n1, &n2);

    char x[n1+5];
    scanf(" %s", x+1);

    bool on[26];
    memset(on, false, sizeof(on));

    for(ll i = 0; i < n2; i++){
        char c;
        scanf(" %c", &c);
        on[c - 'a'] = true;
    }

    x[0] = '9';
    for(ll i = 1; i <= n1; i++){
        if(on[x[i]-'a']){}
        else x[i] = '9';
    }

    //printf("now: %s \n", x);

    ll ans = 0, kount = 0;
    for(ll i = 1; i <= n1; i++){
        if(x[i] != '9') kount++;
        else if(x[i] == '9' && x[i-1] != '9'){
            if(kount & 1){
                ans += kount*((kount+1)/2);
            }
            else{
                ans += (kount/2)*(kount+1);
            }
            kount = 0;
        }
    }
    if(kount & 1){
        ans += kount*((kount+1)/2);
    }
    else{
        ans += (kount/2)*(kount+1);
    }

    printf("%lld\n", ans);

}