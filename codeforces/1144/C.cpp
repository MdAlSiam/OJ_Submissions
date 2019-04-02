#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        ll ara[n+5];
        for(ll i = 0; i < n; i++){
            scanf("%lld", ara+i);
        }

        sort(ara, ara+n);

        bool hobena = false;

        ll curr_len = 1;
        for(ll i = 1; i < n; i++){
            if(ara[i] == ara[i-1]){
                curr_len++;
                if(curr_len >= 3){
                    hobena = true;
                    break;
                }
            }
            else{
                curr_len = 1;
            }
        }

        if(hobena){
            printf("NO\n");
            continue;
        }

        ll ara1[n+3], ara2[n+3];
        ll in1 = 0, in2 = 0;

        ara1[in1++] = ara[0];
        for(ll i = 1; i < n; i++){
            if(ara[i] != ara[i-1]){
                ara1[in1++] = ara[i];
            }
            else{
                ara2[in2++] = ara[i];
            }
        }

        printf("YES\n");
        printf("%lld\n", in1);
        for(int i = 0; i < in1; i++)
            printf(i == in1-1 ? "%lld\n" : "%lld ", ara1[i]);
        printf("%lld\n", in2);
        for(int i = in2-1; i > -1; i--)
            printf(i == 0 ? "%lld\n" : "%lld ", ara2[i]);
        if(in2 == 0) printf("\n");
    }
}
