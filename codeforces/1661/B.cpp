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
#define mod                 32768LL ///10^9+7

#define maxn                200005LL ///2x10^5 + 5

bool debug = 1;

ll x, y, z = -1, maxi, mini;
ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;

ll ara[maxn];
string str;

void solve() {
    scl(n);
    For (i, 0, n) {
        scl(t);

        ll rem = t%32768;
        ll nearest = t-rem+32768;

        ans = 0;

        while (nearest != t) {
            if (nearest%2 == 1) {
                db printf("1.1) Nearest = %lld ans = %lld\n", nearest, ans);
                nearest--;
                ans++;
                db printf("1.2) Nearest = %lld ans = %lld\n", nearest, ans);
            }
            else {
                if (nearest/2 < t) {
                    db printf("3.1) Nearest = %lld ans = %lld\n", nearest, ans);
                    ans += (nearest-t);
                    nearest = t;
                    db printf("3.2) Nearest = %lld ans = %lld\n", nearest, ans);
                }
                else {
                    db printf("2.1) Nearest = %lld ans = %lld\n", nearest, ans);
                    nearest /= 2;
                    ans++;
                    db printf("2.2) Nearest = %lld ans = %lld\n", nearest, ans);
                }
            }
        }

        prl(ans);
    }
} 

void solve2() {
    scl(n);

    For (i, 0, n) {

        scl(t);

        ans = 0;

        ll finalAns = inf;

        if (t%mod == 0) {
            prl(ans);
            continue;
        }

        For (j, 0, 16) {

            t %= mod;

            if (t%mod == 0) {
                finalAns = min(finalAns, ans);
                break;
            }

            ll addAns = 0;

            ll t1 = t;

            For (k, 0, 16) {
                t1 = t1*2;
                t1 %= mod;
                addAns++;

                if (t1%mod == 0) {
                    finalAns = min(finalAns, ans+addAns);
                    break;
                }
            }

            t++;
            ans++;
        }

        prl(finalAns);
    }
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    // scl(test);
    while (test--) solve2();
}