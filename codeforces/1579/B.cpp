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

#define maxn                100LL

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

bool debug = false;

ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, offset, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
ll bra[maxn];
string str;
vector<ll> answers;

void solve() {
    scl(n);

    For (i, 0, n) scl(ara[i]);
    For (i, 0, n) bra[i] = ara[i];

    sort(bra, bra+n);

    answers.clear();

    For (i, 0, n) {
        ll offsetAt;
        For (j, i, n) {
            if (bra[i] == ara[j]) {
                offset = j-i;
                offsetAt = j;
                break;
            }
        }

        if (offset == 0) continue;

        answers.push_back(i+1);
        answers.push_back(offset);

        for (ll k = offsetAt-1; k >= i; k--) ara[k+1] = ara[k];
        ara[i] = bra[i];
    }

    cout << answers.size()/2 << endl;
    for (ll i = 0; i < answers.size(); i += 2) cout << answers[i] 
                                                        << " " << answers[i]+answers[i+1] 
                                                        << " " << answers[i+1] << endl;

    answers.clear();
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve();
}