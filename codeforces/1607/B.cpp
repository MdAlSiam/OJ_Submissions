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

#define maxn                200005LL ///2x10^5 + 5

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

bool debug = false;

ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    scll(x, n);

    ll x1 = x;

    if (n == 0) {
        prl(x);
        return;
    }

    ll rem = n%4;

    ll times = n/4;

    ll inits[4];

    ll shift = 1;
    For (i, 1, 5) {
        if (x%2 == 0) {
            shift = -i;
        }
        else {
            shift = i;
        }

        x += shift;

        inits[i%4] = x;
    }

    t = 0;

    if (rem == 1) {
        t = -(4*(n/4));
    }

    if (rem == 3) {
        t = (4*(n/4));
    }

    // cout << "> " << t << endl;
    if (x1 < 0) x1 = -x1;
    if (x1%2 == 1) t = -t;

    prl(inits[rem]+t);
} 


void solve2() {
    scll(x, n);

    ll delX[4] = {0, 0, 0, 0};
    ll inits[4];
    ll shift;

    For (i, 1, 9) {
        if (x%2 == 0) {
            shift = -i;
        }
        else {
            shift = i;
        }

        x += shift;

        if (i > 4) delX[i%4] = x-inits[i%4];

        if (i == 4) inits[0] = x;
        if (i < 4)  inits[i] = x;
    }

    ans = inits[n%4]+(n/4)*delX[n%4];

    prl(ans);
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve2();
}