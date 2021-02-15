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
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    scll(n, k);

    ll skip_rate = n - (n/2) - 1;

    if (n % 2 == 0) {
        ans = k%n;
        if (ans == 0) ans = n;
        prl(ans);
    }
    else {
        // ll kk = k;
        // if (k & 1) kk = k + (k/skip_rate);
        // else kk = k + (k/skip_rate) - 1;
        
        // ans = kk%n;
        // printf("=%lld %lld %lld\n", skip_rate, kk, ans);
        // if (ans == 0) ans = n;

        ll start = 1 + skip_rate;
        

        ll toAdd = 1;
        ll nNumbers = k - start;
        toAdd += (nNumbers/skip_rate);
        if (k >= start) k += toAdd;

        ans = k%n;
        if (ans == 0) ans = n;
        //prl(ans);

        prl(ans);
    }
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}

// My feelings are not to be cared as well as cared