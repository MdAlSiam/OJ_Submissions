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

ll ara[maxn];
string str;

void solve() {
    ll gx, gy;
    scll(gx, gy);

    ll nicherkonarx, nicherkonary, uporerkonarx, uporerkonary;
    scll(nicherkonarx, nicherkonary);
    scll(uporerkonarx, uporerkonary);

    ll req_x, req_y;
    scll(req_x, req_y);

    uporerkonarx--;
    uporerkonary--;

    gx--;
    gy--;

    ll left_x = nicherkonarx;
    ll right_x = gx-uporerkonarx;
    ll up_y = gy-uporerkonary;
    ll dn_y = nicherkonary;

    ans = inf;

    // left_x
    ll more_x = req_x - left_x;
    if (more_x <= 0) {
        ans = 0;
    }
    else if (more_x <= right_x) {
        ans = min(ans, more_x);
    }

    // printf(">> 1 %lld\n", more_x);

    // right_x
    more_x = req_x - right_x;
    if (more_x <= 0) {
        ans = 0;
    }
    else if (more_x <= left_x) {
        ans = min(ans, more_x);
    }

    // printf(">> 2 %lld\n", more_x);

    // up_x
    ll more_y = req_y - up_y;
    if (more_y <= 0) {
        ans = 0;
    }
    else if (more_y <= dn_y) {
        ans = min(ans, more_y);
    }

    // printf(">> 3 %lld\n", more_y);

    // dn_y
    more_y = req_y - dn_y;
    if (more_y <= 0) {
        ans = 0;
    }
    else if (more_y <= up_y) {
        ans = min(ans, more_y);
    }

    // printf(">> 4 %lld\n", more_y);

    if (ans == inf) prl(z);
    else printf("%.9lf\n", (double)ans);
} 
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}