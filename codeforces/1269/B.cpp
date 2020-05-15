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
ll a, b, c, ans, ara[2020], bra[2020], cra[2020];
ll x, y, z;

/*_________________________________________________________________________________________*/

int main(){
while(scll(n, m) == 2){
    For(i, 0, n) scl(ara[i]);
    For(i, 0, n) scl(bra[i]);

    sort(bra, bra+n);

    ans = inf;

    For(i, 0, n){
        x = bra[i] - ara[0];
        if(x < 0) x += m;
        else x %= m;

        For(j, 0, n) cra[j] = ( ara[j] + x ) % m;
        sort(cra, cra+n);
        bool ok = true;
        For(j, 0, n) if(cra[j] != bra[j]) ok = false;
        if(ok) ans = min(ans, x);
    }

    prl(ans);
}}

/*******************************************************************************************/
