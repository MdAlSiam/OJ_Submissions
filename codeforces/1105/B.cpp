#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, k;
    while(scanf("%lld %lld", &n, &k) == 2){
        char str[n+6];
        scanf("%s", &str);


    ll ans = -1;

    for(ll i = 0; i < 26; i++){
        char curr_char = 'a' + i;
        ll koytapaisi = 0;
        ll curr_kount;
        if(str[0] == curr_char) curr_kount = 1;
        else curr_kount = 0;

        if(str[0] == curr_char && k == 1){
            koytapaisi++;
            curr_kount = 0;
        }

        for(ll j = 1; j < n; j++){
            if(str[j] == curr_char)
                curr_kount++;
            if(curr_kount == k){
                koytapaisi++;
                curr_kount = 0;
            }
            if(str[j] != curr_char && str[j-1] == curr_char)
                curr_kount = 0;
        }

        ans = max(ans, koytapaisi);
    }

    printf("%lld\n", ans);

    }
}

