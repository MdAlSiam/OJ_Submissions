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
ll a[3], b[3], c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    For (i, 0, 3) {
        scll(a[i], b[i]);
    }

    if (a[0] != a[1] and b[0] != b[1]) {
        ans = abs(a[0]-a[1])+abs(b[0]-b[1]);
    }
    else if (a[0] == a[1] and a[0] == a[2] and ( (b[0] < b[2] and b[2] < b[1]) or (b[1] < b[2] and b[2] < b[0]) ) ) {
        ans = abs(a[0]-a[1])+abs(b[0]-b[1])+2;
    }
    else if (b[0] == b[1] and b[0] == b[2] and ( (a[0] < a[2] and a[2] < a[1]) or (a[1] < a[2] and a[2] < a[0]) ) ) {
        ans = abs(a[0]-a[1])+abs(b[0]-b[1])+2;
    }
    else {
        ans = abs(a[0]-a[1])+abs(b[0]-b[1]);
    }

    prl(ans);
} 
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}