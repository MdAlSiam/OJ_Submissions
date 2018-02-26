#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ck(ll pos, ll p){
    ll i;
    for(i = 2; i <= p && i*i <= pos; i++){
        if(pos % i == 0) return 0;
    }
    return 1;
}

int main(){
   ll p, y, pos;
   while(scanf("%lld %lld", &p, &y) == 2){
        for(pos = y; p < pos; pos--){
            if (ck(pos, p)){
                printf("%lld\n", pos);
                return 0;
            }
        }
        printf("-1\n");
        return 0;
   }
}
