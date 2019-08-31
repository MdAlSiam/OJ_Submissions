#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll test;
    scanf("%lld", &test);

    while(test--){
        ll n, m;
        scanf("%lld %lld", &n, &m);

        ll a[12], sum = 0, ans = 0;

        bool covered = false;

        for(ll i = 1; i <= 10; i++){
            ll pro = m*i;
            if(pro > n){
                covered = true;
                break;
            }
            a[i] = pro % 10;
            sum += a[i];
            //cout << i << " " << a[i] << endl;
        }

        if(covered){
            printf("%d\n", sum);
            continue;
        }

        ans += sum * (n / (m*10));

        ll arolagbe = (n % (m*10)) / m;

        for(ll i = 1; i <= arolagbe; i++){
            ans += a[i];
        }

        printf("%lld\n", ans);
    }
}

