#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    scanf("%lld", &n);

    while(n--){
        ll t;
        scanf("%lld", &t);

        if(t <= 14){printf("NO\n"); continue;}

        if(t%14 <= 6 && t%14 >= 1) printf("YES\n");
        else printf("NO\n");
    }
}
