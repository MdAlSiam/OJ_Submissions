#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll t;
    scanf("%lld", &t);

    while(t--){
        ll x, y;
        scanf("%lld %lld", &x, &y);

        if(x-1 == y) printf("NO\n");
        else printf("YES\n");
    }
}
