/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prYes printf("YES\n")
#define prNo printf("NO\n")
#define aNewLine printf("\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 + 5
//#define maxn 1000006 ///10^6 + 6
//#define maxn 1000000009 ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;
vector<ll> vec;

void solve() {
    scl(n);

    if (n == 2) {
        prl(-z-z);
        return;
    }

    vec.clear();
    //prll (n, n-2);
    vec.pb(n); vec.pb(n-2);
    ll produced = (n+n-2+1)/2;

    //prll(produced, n-1);
    vec.pb(produced); vec.pb(n-1);
    produced = (produced+n-1+1) / 2;
    ll now = n-3;

    while (now > 0) {
        //prll(produced, now);
        vec.pb(produced); vec.pb(now);
        produced = (produced+now+1)/2;
        now--;
    }

    prl(produced);

    kount = 1;

    for (ll num : vec) {
        if (kount & 1) printf("%lld ", num);
        else printf("%lld\n", num);
        kount++;
    }
}

void solve2() {
    scl(n);

    vec.clear();

    vec.pb(n);
    vec.pb(n-1);
    ll produced = (n+n-1+1)/2;

    ll now = n-2;
    while (now > 0) {
        vec.pb(produced);
        vec.pb(now);
        produced = (now+produced+1)/2;
        now--;
    }

    prl(produced);

    kount = 1;

    for (ll num : vec) {
        if (kount & 1) printf("%lld ", num);
        else printf("%lld\n", num);
        kount++;
    }
}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve2();
}

