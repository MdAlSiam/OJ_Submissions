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

#define maxn 200005LL ///2x10^5 + 5
//#define maxn 1000006LL ///10^6 + 6
//#define maxn 1000000009LL ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini, d;

ll ara[maxn];
string str;

bool dPresent(ll num) {
    while (num != 0) {
        if (num%10 == d) return true;
        num /= 10;
    }
    return false;
}

bool go(ll num) {
    if (num%2== 0) {
        if (d == 2) return true;
        while (num%2 == 0) num /= 2;
    }
    for (ll i = 3; i*i <= num; i += 2) {
        if (num%i == 0) {
            if (dPresent(i)) return true;
            while (num%i == 0) num /= i;
        }
    }
    if (num != 0 and dPresent(num)) return true;
    return false;
}

void readArray(ll* ara, ll start, ll stopPlusOne) {
    For (i, start, stopPlusOne) {
        scl(ara[i]);
        // if (go(ara[i])) prYes;
        // else prNo;
        t = -1;
        for (ll i = 1; i <= 10; i++) {
            printf("%lld %lld %lld ->", i*d, ara[i]);
            if ((i*d)%10 == ara[i]%10 and ara[i] >= i*d and (ara[i]-i*d)%10 == 0 ) {
                prYes;
                t = 1;
                break;
            }
        }
        if (t == -1) prNo;
    }
}

void solve() {
    scll(n, d);
    readArray(ara, 0, n);
}

void solve2() {
    scll(n, d);
    while(n--) {
        bool got = false;
        scl(t);
        for (ll i = 1; i*d <= t; i++) {
            // if ((i*d)%10 == t%10 and t >= i*d and (t-i*d)%10 == 0) {
            if (t >= i*d and dPresent(t-i*d)) {
                prYes;
                got = true;
                break;
            }
        }
        if (not got) prNo;
    }
}

void solve3() {
    scll(n, d);
    For (i, 0, n) {
        scl(t);
        while (t > 0) {
            if (dPresent(t)) {
                prYes;
                t = -69;
                break;
            }
            t -= d;
        }
        if (t != -69) prNo;
    }
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve3();
}