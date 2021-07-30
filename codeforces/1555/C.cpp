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

bool debug = false;

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara1[maxn];
ll ara2[maxn];
ll cs1[maxn];
ll cs2[maxn];

void solve() {

    scl(n);
    For (i, 0, n) scl(ara1[i]);
    For (i, 0, n) scl(ara2[i]);

    cs1[0] = ara1[0];
    For (i, 1, n) cs1[i] = cs1[i-1]+ara1[i];

    cs2[0] = ara2[0];
    For (i, 1, n) cs2[i] = cs2[i-1]+ara2[i];

    ll minimum = inf;
    ll backtake;
    ll fwdtake;

    For (i, 0, n) {
        if (i-1 >= 0) backtake = cs2[i-1];
        else backtake = 0;

        fwdtake = cs1[n-1]-cs1[i];

        ll maxtake = max(backtake, fwdtake);

        if (maxtake < minimum) minimum = maxtake;
    }

    prl(minimum);
    return;

    ll totFrom1 = 0;
    
    ll totHere = 0;
    ll totMax = 0;

     ll downAt;

    For (i, 0, n) {
        totFrom1 += ara1[i];
        if (i-1 < 0)  totHere = totFrom1+(cs2[n-1]);
        else totHere = totFrom1+(cs2[n-1]-cs2[i-1]);

        if (totHere > totMax) {
            totMax = totHere;
            downAt = i;
        }
    }

    // upd ara1, ara2, cs2
    For (i, 0, n) {
        if (i < downAt) ara1[i] = 0;
        else if (i == downAt) {
            ara1[i] = 0;
            ara2[i] = 0;
        }
        else {
            ara2[i] = 0;
        }
    }

    cs2[0] = ara2[0];
    For (i, 1, n) cs2[i] = cs2[i-1]+ara2[i];

    // print
    For (i, 0, n) printf("%lld ", ara1[i]);
    printf(" OK \n");
    For (i, 0, n) printf("%lld ", ara2[i]);
    printf(" OK \n");
    For (i, 0, n) printf("%lld ", cs2[i]);
    printf(" OK \n");

    // again
    totFrom1 = 0;
    totHere = 0;
    totMax = 0;

    For (i, 0, n) {
        totFrom1 += ara1[i];
        if (i-1 < 0)  totHere = totFrom1+(cs2[n-1]);
        else totHere = totFrom1+(cs2[n-1]-cs2[i-1]);

        if (totHere > totMax) {
            totMax = totHere;
        }
    }

    prl(totMax);

} 
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}