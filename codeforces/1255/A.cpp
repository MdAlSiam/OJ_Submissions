#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n, m, a, b, x, y, z, t, test;

int main(){
    //cout << "Test run\n";
    scanf("%lld", &test);
    while(test--){

        scanf("%lld %lld", &a, &b);
        ll dif = abs(a-b);

        ll ans = dif / 5;

        ll kk = dif - ans*5, kkkk = ans*5 + 5 - dif;

        if(kk < kkkk){
            if(kk == 1) ans += 1;
            if(kk == 2) ans += 1;
            if(kk == 3) ans += 2;
            if(kk == 4) ans += 2;
        }
        else{
            ans++;
            if(kkkk == 1) ans += 1;
            if(kkkk == 2) ans += 1;
            if(kkkk == 3) ans += 2;
            if(kkkk == 4) ans += 2;
        }

        printf("%lld\n", ans);
    }
}

