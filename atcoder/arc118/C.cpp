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

#define maxn                200005LL ///2x10^5 + 5

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

bool debug = false;

ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll primes[maxn];
string str;

bool mark[maxn];

void sieve() {
    memset(mark, false, sizeof(mark));

    for (ll i = 3; i < maxn; i += 2) {
        if (mark[i/2] == false) {
            for (ll j = i; i*j < maxn; j += 2)  {
                mark[(i*j)/2] = true;
            }
        }
    }

    ll pin = 0;
    primes[pin++] = 2;
    for (ll i = 3; i < maxn; i += 2) if (mark[i/2] == false) primes[pin++] = i;
}

void solve() {
    // sieve();

    scl(n);

    cout << "6 10 15 ";

    n -= 3;

    for (ll i = 16; i <= 10000 and n; i++) {
        if (i%6 == 0 or i%10 == 0 or i%15 == 0) {
            cout << i << " ";
            n--;
        }
    }

    cout << endl;
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    // scl(test);
    while (test--) solve();
}