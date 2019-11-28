#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dd double
#define ull unsigned long long int //%llu as format specifier

#define pi acos(-1)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 100000008 ///10^8
//#define maxn 1000000009 ///10^9

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)

ll n, m, a, b, c, x, y, z, t, test, temp;

int main(){
    scl(test);
    while(test--){
        scl(n);
        char a[n+2], t[n+2], a1, a2, t1, t2, kount = 0;
        scanf(" %s", a);
        scanf(" %s", t);

        bool ok = false;

        for(ll i = 0; i < n; i++){

            if(a[i] != t[i]){
                 kount++;
                 if(kount == 1){

                    a1= a[i];
                    t1 = t[i];
                 }
                 if(kount == 2){

                    a2= a[i];
                    t2 = t[i];
                 }
                 if(kount==2){
                    if(a1 == a2 && t1 == t2) ok = true;
                    else {ok = false; break;}
                 }

                 if(kount > 2) {ok = false; break;}

            }

        }

        if(ok) printf("Yes\n");
        else printf("No\n");
    }
}




