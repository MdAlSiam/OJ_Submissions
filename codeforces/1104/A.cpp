#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        printf("%lld\n", n);
        printf("1");
        for(ll i = 2; i <= n; i++)
            printf(" 1");
        printf("\n");
    }
}

