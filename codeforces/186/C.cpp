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
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll bigmod(ll base, ll pow) {
    if (pow == 0) return 1;
    if (pow == 1) return base;
    if (pow & 1) {
        return ((bigmod(base, pow-1)%mod)*(base%mod))%mod;
    }
    else {
        ll ret = bigmod(base, pow/2);
        return ((ret%mod)*(ret%mod))%mod;
    }
}

void solve() {
    cin >> n;
    //cout << (*((((bigmod(2, n))%mod+1%mod)%mod)%mod)*((bigmod(2, mod-2))%mod))%mod << endl;
    a = ((bigmod(2LL, n))%mod);
    ans = a;
    a = ((a%mod)+(1LL%mod))%mod;
    ans = ((ans%mod)*(a%mod))%mod;
    ans = ((ans%mod)*((bigmod(2, mod-2LL))%mod))%mod;
    cout << ans << endl;

}

int main() {
    test = 1;
    //scl(test);
    while (test--) solve();
}
    
    