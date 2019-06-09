#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    ll q;
    scanf("%lld", &q);

    while(q--){
        ll n;
        scanf("%lld", &n);

        ll kount = 0;
        bool nai = false;
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
                kount++;
            }
            else if(n % 3 == 0){
                n = (n / 3) * 2;
                kount++;
            }
            else if(n % 5 == 0){
                n =  (n / 5) * 4;
                kount++;
            }
            else{
                nai = true;
                break;
            }
        } ///while

        if(nai) printf("-1\n");
        else printf("%lld\n", kount);
    }
}

