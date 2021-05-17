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

ll t, nTest, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    cin >> n;
    cin >> str;
    ll nTwos = 0;
    ll nThrees = 0;

    For (nTwoCandidate, 0, (n+1)/2) {
        ll remaining = n-nTwoCandidate*2;
        if (remaining <= 0) continue;
        if (remaining%2 == 0) {
            nTwos = nTwoCandidate;
            nTwos += remaining/2;
            break;
        }
        if (remaining%3 == 0) {
            nTwos = nTwoCandidate;
            nThrees = remaining/3;
            break;
        }
    }

    ll pointer = 0;

    bool twoPrinted = false;

    while (nTwos--) {
        printf("%c", str[pointer++]);
        printf("%c", str[pointer++]);
        if (nTwos) printf("-");
        twoPrinted = true;
    }
    if (nThrees and twoPrinted) printf("-");
    while (nThrees--) {
        printf("%c", str[pointer++]);
        printf("%c", str[pointer++]);
        printf("%c", str[pointer++]);
        if (nThrees) printf("-");
    }
    aNewLine;
} 

int32_t main() {
    nTest = 1;
    // scl(nTest);
    while (nTest--) solve();
}