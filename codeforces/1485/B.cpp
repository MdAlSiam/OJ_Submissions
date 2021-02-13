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
ll a, b, c, ans, u, v, q;
ll x, y, z = -1, maxi, mini;
ll lt, rt;

ll ara[maxn];
ll bra[maxn];
ll cs[maxn];
string str;

void solve() {
    scll(n, q);
    scl(k);
    ara[0] = 0;
    For (i, 1, n+1) scl(ara[i]);
    ara[n+1] = k+1;
    For (i, 1, n+1) bra[i] = ara[i+1]-ara[i-1]-2;
    cs[1] = bra[1];
    For (i, 2, n+1) cs[i] = cs[i-1]+bra[i];

    while (q--) {
        scll(lt, rt);
        ans = cs[rt]-cs[lt-1];
        ans += ara[lt-1];
        ans += k+1-ara[rt+1];
        prl(ans);
    }
}

int main() {
    test = 1;
    // scl(test);
    while (test--) solve();
}

// My feelings are not to be cared as well as cared