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

ll numberWithDigitsWith3[11];
ll numberWithDigitsWith5[11];

ll nDigitsCalc(ll num) {
    ll ret = 0;
    while (num > 0) {
        num /= 10;
        ret++;
    }
    return ret;
}

void precalculate() {
    memset(numberWithDigitsWith3, -1, sizeof(numberWithDigitsWith3));
    memset(numberWithDigitsWith5, -1, sizeof(numberWithDigitsWith5));

    ll n1 = 3;

    while (true) {
        ll nDigits = nDigitsCalc(n1);
        if (nDigits > 10) break;
        numberWithDigitsWith3[nDigits] = n1;
        n1 *= 3;
    }

    ll n2 = 5;
    while (true) {
        ll nDigits = nDigitsCalc(n2);
        if (nDigits > 10)  break;
        numberWithDigitsWith5[nDigits] = n2;
        n2 *= 5;
    }
}

void solve() {
    precalculate();

    scll(a, b);
    scl(c);

    ll cCoversDigits = c-1;
    ll aRequiresDigit = a-cCoversDigits;
    ll bRequiresDigit = b-cCoversDigits;

    x = y = 1;
    while (cCoversDigits--) {
        x *= 10;
        y *= 10;
    }

    x *= numberWithDigitsWith3[aRequiresDigit];
    y *= numberWithDigitsWith5[bRequiresDigit];

    prll(x, y);
} 

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}