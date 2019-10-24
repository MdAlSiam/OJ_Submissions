#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll q;
    scanf("%lld", &q);

    while(q--){

        ll n;
        scanf("%lld", &n);

        ll sum = 0, maxadded = 1;

        while(1){
            sum += maxadded;
            if(sum >= n) break;
            maxadded *= 3;
        }

        while(maxadded >= 1){
            if(sum - maxadded >= n)
                sum -= maxadded;
            maxadded /= 3;
        }

        printf("%lld\n", sum);
    }
}
