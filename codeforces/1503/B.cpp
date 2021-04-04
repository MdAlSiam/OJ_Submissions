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
ll c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

vector<pll > a;
vector<pll > b;

void solve() {
    scl(n);
    For (i, 0, n) {
        For (j, 0, n) {
            if ((i+j)%2 == 0) {
                a.pb({i, j});
            }
            else {
                b.pb({i, j});
            }
        }
    }

    while (a.size() and b.size()) {
        scl(x);
        if (x == 1) {
            printf("2 %lld %lld\n", b.back().ff+1, b.back().ss+1);
            fflush(stdout);
            b.pop_back();
        }
        else {
            printf("1 %lld %lld\n", a.back().ff+1, a.back().ss+1);
            fflush(stdout);
            a.pop_back();
        }
    }

    while (a.size()) {
        scl(x);
        if (x == 1) {
            printf("3 %lld %lld\n", a.back().ff+1, a.back().ss+1);
            fflush(stdout);
            a.pop_back();
        }
        else {
            printf("1 %lld %lld\n", a.back().ff+1, a.back().ss+1);
            fflush(stdout);
            a.pop_back();
        }
    }

    while (b.size()) {
        scl(x);
        if (x == 2) {
            printf("3 %lld %lld\n", b.back().ff+1, b.back().ss+1);
            fflush(stdout);
            b.pop_back();
        }
        else {
            printf("2 %lld %lld\n", b.back().ff+1, b.back().ss+1);
            fflush(stdout);
            b.pop_back();
        }
    }
} 

int32_t main() {
    test = 1;
    // scl(test);
    while (test--) solve();
}