
#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ll t;
    scanf("%lld", &t);

    while(t--){

        ll n;
        scanf("%lld", &n);

        ll q[n+4];
        for(ll i = 1; i <= n; i++)
            scanf("%lld", q+i);

        bool taken[n+4];
        memset(taken, false, sizeof(taken));

        ll ansara[n+4];

        ansara[1] = q[1];
        taken[ ansara[1] ] = true;

        ll j = 1;
        bool hobena = false;

        for(ll i = 2; i <= n; i++){
            if(q[i] == q[i-1]){
                for(; taken[j] && j <= n; j++){}
                if(j > q[i] || j > n ) {hobena = true; break;}
                ansara[i] = j;
                taken[j] = true;
            }
            else {ansara[i] = q[i]; taken[ ansara[i] ] = true;}
        }

        for(ll i = 1; i <= n && !hobena; i++)
            printf(i == n ? "%lld\n":"%lld ", ansara[i]);
        if(hobena) printf("-1\n");
    }
}
