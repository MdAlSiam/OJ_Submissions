/* In the name of Allah SWT */

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prys printf("YES\n")
#define prno printf("NO\n")

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
ll a, b, c, ans;
ll x, y, z = -1;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    ll z1, o1, t1, z2, o2, t2;
    cin >> z1 >> o1 >> t1;
    cin >> z2 >> o2 >> t2;

    ans = 0;

    ll rmv = min(t1, o2);
    ans += rmv + rmv;
    t1 -= rmv;
    o2 -= rmv;

    ll rem = 0;
    if(z2+o2 >= o1);
    else rem = o1 - (z2+o2);

    rmv = min(rem, t2);
    ans -= rmv;
    ans -= rmv;

    prl(ans);
}}}

/*******************************************************************************************/

