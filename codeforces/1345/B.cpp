#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n, kount;
vector<ll> lagbe;

void make(){
    lagbe.push_back(0);
    for(ll i = 1;; i++){
        ll t = i-1;
        ll sum = ((t*(t+1))/2)*3;
        ll laglo = sum + 2*i;
        lagbe.push_back(laglo);
        if(laglo >= 1000000009) break;
    }
}

void doit(){
    scanf("%lld", &n);

    kount = 0;

    /* Method 1 */

    while(1){
        if(n < 2) break;

        for(ll i = lagbe.size()-1; i > 0; i--){
            if(lagbe[i] <= n){
                n -= lagbe[i];
                kount++;
                break;
            }
        }
    }

    /* Method 2 */

//    for(ll i = lagbe.size()-1; i > 0; i--){
//        if(lagbe[i] <= n){
//            n -= lagbe[i];
//            kount++;
//        }
//        if(n < 2) break;
//    }

    printf("%lld\n", kount);

}

int main(){
    ll test;
    make();
    scanf("%lld", &test);
    while(test--) doit();
}
