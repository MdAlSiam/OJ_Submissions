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
ll a, b, c, u, v;
ll x, y, z = -1, maxi, mini;

void solve() {
    scll(n, m);
    ll ara[n+10];
    For (i, 1, n+1) scl(ara[i]);

    ll leastPos = -1;
    for (ll i = n; i >= 1; i--) {
        // printf("~~ %lld %lld\n", i, ara[i]);
        if (ara[i] != i) {
            leastPos = i;
            break;
        }
    }

    dd ans = 1.00;

    if (leastPos == -1) {
        while(m--) {
            ll t1;
            dd t2;
            cin >> t1 >> t2;
        }
        printf("%.6lf\n", ans);
        return;
    }

    dd notHappeningBefore = 1.00;
    ans = 0.00;

    // printf(":: leastPos = %lld\n", leastPos);

    For (i, 1, m+1) {
        ll till;
        dd probabililty;

        cin >> till >> probabililty;

        if (till >= leastPos) {
            // printf("->ans=%.2lf notHapp=%.2lf pro=%.2lf\n", ans, notHappeningBefore, probabililty);
            ans += notHappeningBefore*probabililty;
            notHappeningBefore *= (1-probabililty);
            // printf("->->ans=%.2lf notHappen=%.2lf pro=%.2lf\n", ans, notHappeningBefore, probabililty);
        }

    }

    printf("%.6lf\n", ans);
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}