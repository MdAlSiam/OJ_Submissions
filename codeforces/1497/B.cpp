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
ll n, m, k;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

map<ll, ll> mp;

void solve() {
    scll(n, m);
    For (i, 0, n) {
        scl(ara[i]);
    }
    sort(ara, ara+n);
    ara[n] = -1;
    mp.clear();

    ll subtract = 0;

    For (i, 0, n+1) {   

        if (i > 0 and ara[i-1] != ara[i]) {
            ll req = m-ara[i-1];
            if (req > 0 and mp.count(req)) {
                if (ara[i-1] == req) {
                    subtract += (mp[req]-1);
                }
                else {
                    subtract += mp[ara[i-1]]+mp[req]-1;
                }
            }
        }

        if (mp.count(ara[i])) mp[ara[i]]++;
        else mp[ara[i]] = 0;
    }

    prl(n-subtract);
} 

void solve2() {
    scll(n, m);
    ll kount[m+10];
    Mem(kount, 0);
    For (i, 0, n) {
        scl(ara[i]);
        kount[ara[i]%m]++;
    }

    ll lo = 1, hi = m-1;

    if (kount[0]) ans = 1;
    else ans = 0;

    while (lo <= hi) {
        if (lo == hi) {
            if ((lo+lo)%m==0 and kount[lo]>1) {
                ans++;
            }
            else ans += kount[lo];
            break;
        }
        
        ll tot = kount[lo]+kount[hi];

        if (kount[lo] == 0 or kount[hi] == 0) {
            ans += max(kount[lo], kount[hi]);
        }
        else if (min(kount[lo], kount[hi])+1 <= max(kount[lo], kount[hi])) {
            ans += (tot-2*(min(kount[lo], kount[hi])));
        }
        else ans += 1;

        lo++;
        hi--;
    }

    prl(ans);
}

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve2();
}