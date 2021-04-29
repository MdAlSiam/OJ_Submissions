/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define scd(x)              scanf("%lf", &x)
#define scdd(x, y)          scanf("%lf %lf", &x, &y)

#define prl(x)              printf("%lld\n", x)
#define prll(x, y)          printf("%lld %lld\n", x, y)
#define prYes               printf("YES\n")
#define prNo                printf("NO\n")
#define aNewLine            printf("\n")

#define ON(n, i)            (n|(1LL<<i))
#define OFF(n, i)           (n&(~(1LL<<i)))
#define CHK(n, i)           (n&(1LL<<i))

#define For(i, x, y)        for(ll i = x; i < y; i++)
#define Mem(ara, x)         memset(ara, x, sizeof(ara))

#define pb                  push_back
#define pll                 pair<ll, ll >
#define ff                  first
#define ss                  second

#define maxn                200005LL ///2x10^5 + 5

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7 

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v, make;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

ll dp[105][105];

ll go(ll xp, ll yp, ll cost) {
    if (xp == n-1 and yp == m-1) {
        // cout << "! " << cost << endl;
        if (cost == make) return 1;
        else return 0;
    }

    if (dp[xp][yp] != -1) {
        return dp[xp][yp];
    }

    ll ret1 = 0;
    if (xp+1 < n) ret1 = go(xp+1, yp, cost+yp+1);
    ll ret2 = 0;
    if (yp+1 < m) ret2 = go(xp, yp+1, cost+xp+1);

    return dp[xp][yp] = ret1 | ret2;
}

void solve() {
    scll(n, m);
    scl(make);
    For (i, 0, 105) {
        For (j, 0, 105) {
            dp[i][j] = -1;
        }
    }

    t = go(0, 0, 0);

    if (t) prYes;
    else prNo;
} 

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
} 