#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n, m;

    while(scanf("%lld %lld", &n, &m) == 2){
        char s[n+2], t[m+2];
        scanf("%s", &s);
        scanf("%s", &t);

        if(n == m){
            ll same = 1;
            for(ll i = 0; i < n; i++){
                if(s[i] != t[i]){
                    same = 0;
                }
            }
            if(same){printf("YES\n"); continue;}
        }

        ll starfound = 0, starpos;


        for(ll i = 0; i < n; i++){
            if(s[i] == '*'){
                starfound = 1;
                starpos = i;
                break;
            }
        }

        if(starfound == 0) {printf("NO\n"); continue;}
        if(m < (n-1)) {printf("NO\n"); continue;}

        ///Leftcheck
        ll leftok = 1;
        for(ll i = 0; i < starpos; i++){
            if(s[i] != t[i]){
                leftok = 0;
                break;
            }
        }

        ///Rightcheck
        ll rightok = 1;
        ll i, j;
        for(i = n-1, j = m-1; i > starpos; i--, j--){
            if(s[i] != t[j]){
                rightok = 0;
                break;
            }
        }

        if(leftok && rightok) {printf("YES\n");}
        else {printf("NO\n");}
    } ///End of Program

    return 0;
}
