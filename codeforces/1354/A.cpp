#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, d, ans;
ll x, y, z = -1;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    scll(a, b);
    scll(c, d);

    ll ans = b;
    ll elapsed = b;

    if(ans >= a){
        prl(elapsed);
        continue;
    }

    ll add = c - d;

    if(add <= 0){
        prl(z);
        continue;
    }

//    while(1){
//        ans += add;
//        elapsed += c;
//        if(ans >= a) break;
//    }

    ll lagbe = a - elapsed;
    ll bar = lagbe / add;

    if(bar*add != lagbe) bar++;

//    prll(lagbe, c);
//    prll(add, elapsed);

    elapsed += (bar*c);

    prl(elapsed);
}
}}

/*******************************************************************************************/

