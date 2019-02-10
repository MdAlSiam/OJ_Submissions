#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll x, y, z, a, b, c, total;
    scanf("%lld %lld %lld", &x, &y, &z);
    scanf("%lld %lld %lld", &a, &b, &c);

    ll hobe = true;

    if(x <= a){a -= x;}
    else {hobe = false;}

    if(y <= a+b){total = a+b+c-y;}
    else{hobe = false;}

    if(z <= total){}
    else {hobe = false;}

    if(hobe) printf("YES\n");
    else printf("NO\n");
}

