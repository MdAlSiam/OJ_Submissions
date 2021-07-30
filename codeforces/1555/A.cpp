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

ll slices[] = {6, 8, 10};
ll times[] = {15, 20, 25};

ll calc(ll i1, ll i2, ll i3) {
    ll num = n;

    ll timeNeeded = 0;

    ll times1 = num/slices[i1];
    timeNeeded += times[i1]*times1;
    num = num%slices[i1];

    if (num == 0) return timeNeeded;

    times1 = num/slices[i2];
    timeNeeded += times[i2]*times1;
    num = num%slices[i2];

    if (num == 0) return timeNeeded;

    times1 = num/slices[i3];
    timeNeeded += times[i3]*times1;
    num = num%slices[i3];

    if (num == 0) return timeNeeded;

    return inf;
}

void solve() {
    scl(n);

    // abc  acb  bac  bca  cab  cba

    ans = inf;
    ans = min(ans, calc(0, 1, 2));

    ans = min(ans, calc(0, 2, 1));

    ans = min(ans, calc(1, 0, 2));
    ans = min(ans, calc(1, 2, 0));

    ans = min(ans, calc(2, 0, 1));
    ans = min(ans, calc(2, 1, 0));

    prl(ans);
} 

void solve2() {
    scl(n);

    if (n <= 6) ans = 15;
    else if (n%6 == 0) ans = (n/6)*15;
    else if (n%6 <= 2) ans = 20+((n/6)-1)*15;
    else if (n%6 <= 4) ans = 25+((n/6)-1)*15;
    else ans = 15+(n/6)*15;

    prl(ans);
}
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve2();
}