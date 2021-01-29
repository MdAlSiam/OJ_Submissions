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
#define prYes printf("YES\n")
#define prNo printf("NO\n")
#define aNewLine printf("\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005LL ///2x10^5 + 5
//#define maxn 1000006LL ///10^6 + 6
//#define maxn 1000000009LL ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    scll(n, k);
    ll ara[n];
    For (i, 0, n) scl(ara[i]);
    ll cs[n];
    cs[0] = ara[0];
    For (i, 1, n) cs[i] = cs[i-1] + ara[i];

    dd right = (k*1.00)/100;

    ans = 0;
    ll added = 0;

    // for (ll i = 1; false and i < n; i++) {
    //     dd left = (ara[i]*1.00)/(cs[i-1]+added);
    //     if (left-right <= eps) continue;
    //     else {
    //         ll toAdd = ara[i]*100 - cs[i-1];
    //         if (toAdd >= 0) {
    //             ans += toAdd;
    //             added += toAdd;
    //         }
    //     }
    // }

    for (ll i = n-1; i > 0; i--) {
        if (ara[i]*100 <= k*(cs[i-1]+added)) continue;
        ll extra = ara[i]*100 - k*(cs[i-1]+added);
        ll toAdd = extra/k;
        if (k*toAdd != extra) toAdd++;
        ans += toAdd;
        added += toAdd;
    }

    prl(ans);
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}