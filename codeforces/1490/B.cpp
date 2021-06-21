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
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    scl(n);
    ll rem0 = 0, rem1 = 0, rem2 = 0;
    For (i, 0, n) {
        scl(t);
        if (t%3 == 0) rem0++;
        else if (t%3 == 1) rem1++;
        else rem2++;
    }

    ans = 0;


    // Fill 0
    if (rem0 < n/3) {
        if (rem2 > n/3) {
            ll rrr = min(((n/3)-rem0), (rem2-(n/3)));;
            ans += rrr;
            rem0 += rrr;
            rem2 -= rrr;
        }
    }

    if (rem0 < n/3) {
        if (rem1 > n/3) {
            ll rrr = min(((n/3)-rem0), (rem1-(n/3)));;
            ans += 2*rrr;
            rem0 += rrr;
            rem1 -= rrr;
        }
    }

    // Fill 1
    if (rem1 < n/3) {
        if (rem0 > n/3) {
            ll rrr = min(((n/3)-rem1), (rem0-(n/3)));;
            ans += rrr;
            rem1 += rrr;
            rem0 -= rrr;
        }
    }

    if (rem1 < n/3) {
        if (rem2 > n/3) {
            ll rrr = min(((n/3)-rem1), (rem2-(n/3)));;
            ans += 2*rrr;
            rem1 += rrr;
            rem2 -= rrr;
        }
    }

    // Fill 2
    if (rem2 < n/3) {
        if (rem1 > n/3) {
            ll rrr = min(((n/3)-rem2), (rem1-(n/3)));;
            ans += rrr;
            rem2 += rrr;
            rem1 -= rrr;
        }
    }

    if (rem2 < n/3) {
        if (rem0 > n/3) {
            ll rrr = min(((n/3)-rem2), (rem0-(n/3)));;
            ans += 2*rrr;
            rem2 += rrr;
            rem0 -= rrr;
        }
    }

    prl(ans);
} 
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}