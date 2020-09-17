

/// In the name of Allah SWT

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

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;
ll ara[maxn];
ll dp[maxn][2];

ll go(ll index, ll stage) {

    if (index == n) return 0;

    if (dp[index][stage] != -1) return dp[index][stage];

    ll ret = inf;
    if (stage & 1) {
        ret = min(ret, ara[index]+go(index+1, 2));
        if (index+1 < n) ret = min(ret, ara[index]+ara[index+1]+go(index+2, 2));
    }
    else {
        ret = min(ret, go(index+1, 1));
        if (index+1 < n) ret = min(ret, go(index+2, 1));
    }

    return dp[index][stage] = ret;
}

void solve() {
    scl(n);
    For (i, 0, n) {
        scl(ara[i]);
        dp[i][0] = dp[i][1] = -1;
    }
    dp[n][0] = dp[n][1] = -1;
    prl(go(0, 1));
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}
