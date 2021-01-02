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

ll deg[maxn], weights[maxn];

void solve() {
    scl(n);
    ans = 0;
    For (i, 1, n+1) {scl(weights[i]); ans += weights[i];}
    For (i, 0, n+1) deg[i] = 0LL;
    For (i, 1, n) {
        scll(u, v);
        deg[u]++;
        deg[v]++;
    }

    priority_queue<pll> pq;
    For (i, 1, n+1) if (deg[i] > 1) pq.push({weights[i], i});

    printf("%lld ", ans);
    For (i, 2, n) {
        ans += pq.top().ff;
        ll index = pq.top().ss;
        printf("%lld ", ans);
        pq.pop();
        deg[index]--;
        if (deg[index] > 1) pq.push({weights[index], index});
    }

    printf("\n");
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
