#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n, k;
    while(scanf("%lld %lld", &n, &k) == 2){
        char given[n+4];
        scanf("%s", given);

        ll unresponded = 0, taken = 0;
        for(ll i = 0; i < n; i++){
            if(given[i] == '(' && taken+unresponded < k){
                given[taken++] = '(';
                unresponded++;
            }
            else if(given[i] == ')' && unresponded){
                given[taken++] = ')';
                unresponded--;
            }
        }
        given[taken] = 0;

        printf("%s\n", given);
    }
    return 0;
}
