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

bool compare(ll a, ll b){return a > b;}

ll n, m, a, b, c, x, y, z, t, test, temp;

int main(){
    scl(test);
    while(test--){
        scl(n);
        ll ara[n+1];
        for(ll i = 1; i <= n; i++)
            scl(ara[i]);
        sort(ara+1, ara+n+1, compare);
        ll ansnow = 0;
        for(ll i = 1; i <= n; i++){
            if(ara[i] >= i) ansnow = i;
            else break;
        }
        printf("%lld\n", ansnow);
    }
}




