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

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

#define maxn                200005LL ///2x10^5 + 5

bool debug = false;

ll x, y, z = -1, maxi, mini;
ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;

vector<ll> vec[26];
string reff, str;

void solve() {
    cin >> reff >> str;

    For (i, 0, 26) {
        vec[i].clear();
    }

    For (i, 0, reff.length()) {
        vec[reff[i]-'A'].push_back(i);
    }

    bool yes = true;

    ll prev = inf;

    for (ll i = str.length()-1; i >= 0; i--) {
        if (vec[str[i]-'A'].size() == 0) {
            yes = false;
            break;
        }

        ll position = vec[str[i]-'A'][vec[str[i]-'A'].size()-1];
        vec[str[i]-'A'].pop_back();

        if (position < prev) {

        }
        else {
            yes = false;
            break;
        }

        prev = position;
    }

    if (yes) prYes;
    else prNo;
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve();
}