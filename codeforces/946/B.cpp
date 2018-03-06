#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll a, b, big, small;
    while(scanf("%lld %lld", &a, &b) == 2){
        while(1){
            if(a == 0 || b == 0) break;
            else if(a >= 2*b) a %= (2*b);
            else if(b >= 2*a) b %= (2*a);
            else break;
        }
        printf("%lld %lld\n", a, b);
    }
    return 0;
}

