#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n, k;

    while(scanf("%lld %lld", &n, &k) == 2){
        if(n == 1) {printf("0\n"); continue;}

        ll mink = 1+2, maxk = n + n - 1;

        if(k < mink || k > maxk) {printf("0\n"); continue;}

        ll minnum = 1, maxnum = n, ans;

        if(k <= maxnum) ans = (k-1) >> 1;

        else ans = (n+n-k+1) >> 1;

        printf("%lld\n", ans);
    }
}
