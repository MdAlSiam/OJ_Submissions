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
ll n, m, k, kount, kase, total, sum;
ll a, b, c, ans, ansHere, u, v;
ll lo, hi, mid, start, stop;
string str;
bool yes, no;
// ll ara[maxn];
// vector<ll> vc;

void solve() {

    cin >> str;
    str += '#';

    no = false;

    kount = 0;

    For (i, 0, str.length()) {
        if (i > 0 and str[i] != str[i-1]) {
            t = kount;

            yes = false;

            while (t > 0) {
                if (t%3 == 0) {yes = true; break;}
                else if (t%2 == 0) {yes = true; break;}
                else if (t >= 2) t -= 2;
                else {no = true; break;}
            }

            if (yes) {}
            else no = true;

            kount = 0;
        }

        kount++;
    }

    if (no) prNo;
    else prYes;
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve();
}