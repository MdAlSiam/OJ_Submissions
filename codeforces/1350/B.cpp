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

#define maxn 100005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

ll ara[maxn], dp[maxn];

/*_________________________________________________________________________________________*/

ll findfrom(ll now){

    if(dp[now] != -1) return dp[now];

    ll ret = 0;

    for(ll i = 2; now*i <= n; i++)
        if(ara[now*i] > ara[now])
            ret = max(ret, findfrom(now*i));

    return dp[now] = 1+ret;
}

int main(){
while(scl(test) == 1){
while(test--){

    scl(n);
    For(i, 1, n+1) scl(ara[i]);
    Mem(dp, -1);

    ll ans = 0;

    For(i, 1, n+1)
        ans = max(ans, findfrom(i));

    prl(ans);
}
}}

/*******************************************************************************************/
