/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define scd(x)              scanf("%lf", &x)
#define scdd(x, y)          scanf("%lf %lf", &x, &y)
#define db                  if (debug)

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

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

#define maxn                200005LL ///2x10^5 + 5

bool debug = false;

ll x, y, z = -1, maxi, mini;
ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;

ll ara[maxn];
string str;

void solve() {
    scll(n, k);

    vector<ll> positives, negetives;

    positives.clear();
    negetives.clear();

    For (i, 0, n) {
        scl(t);

        if (t < 0LL) negetives.push_back(-t);

        if (t > 0LL) positives.push_back(t);
    }

    if (positives.size()) sort(positives.rbegin(), positives.rend());
    if (negetives.size()) sort(negetives.rbegin(), negetives.rend());

    kount = 0;

    ans = 0;

    For (i, 0, positives.size()) {
        if (i%k == 0) {
            ans += 2*positives[i];
        }
    }

    For (i, 0, negetives.size()) {
        if (i%k == 0) {
            ans += 2*negetives[i];
        }
    }

    if (positives.size() == 0 and negetives.size() == 0) {}
    else if (positives.size() == 0) ans -= negetives[0];
    else if (negetives.size() == 0) ans -= positives[0];
    else ans -= max(positives[0], negetives[0]);

    prl(ans);
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve();
}