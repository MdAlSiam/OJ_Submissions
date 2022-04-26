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

ll x, y, z = -1, maxi, mini, xx, yy, zz;
ll t, test, temp;
ll n, m, k, kount, kase, sum, total;
ll a, b, c, ans, ansHere, u, v;
ll lo, hi, mid, start, stop;
string str;
bool yes;
// ll ara[maxn];
// vector<ll> vc;
ll all[12][12];

void solve() {
    scl(n);

    For (i, 0, 12) For (j, 0, 12) all[i][j] = 0;

    For (i, 0, n) {
        cin >> str;
        all[str[0]-'a'][str[1]-'a']++;
    }

    ans = 0;

    For (i, 0, 12) {
        For (j, 0, 12) {
            sum += all[i][j];
        }

        For (j, 0, 12) {
            sum -= all[i][j];
            ans += all[i][j]*sum;
        }
    }

    For (j, 0, 12) {
        For (i, 0, 12) {
            sum += all[i][j];
        }

        For (i, 0, 12) {
            sum -= all[i][j];
            ans += all[i][j]*sum;
        }
    }

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