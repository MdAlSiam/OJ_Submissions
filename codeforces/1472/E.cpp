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

pair<ll, pll > p[maxn];
ll bva[maxn];
ll bvi[maxn];
ll res[maxn];

bool compare(pair<ll, pll > aa, pair<ll, pll > bb) {
    return aa.ss.ff < bb.ss.ff;
}

void solve() {
    scl(n);
    For (i, 0, n) {
        scll(p[i].ss.ff, p[i].ss.ss);
        if (p[i].ss.ff < p[i].ss.ss) swap(p[i].ss.ff, p[i].ss.ss);
        p[i].ff = i;
    }

    sort(p, p+n, compare);

    ll bv = inf, bi = -1, pt= -1;
    For (i, 0, n) {
        res[p[i].ff] = -2;
        if (i > 0 and p[i-1].ss.ff < p[i].ss.ff) pt = i-1;
        if (pt >= 0 and bva[pt] < p[i].ss.ss) res[p[i].ff] = bvi[pt];

        if (p[i].ss.ss < bv) {
            bv = p[i].ss.ss;
            bi = p[i].ff;
        }

        bva[i] = bv;
        bvi[i] = bi;
    }

    For (i, 0, n) printf("%lld ", res[i]+1);
    aNewLine;
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
