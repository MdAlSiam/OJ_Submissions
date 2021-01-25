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
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void readArray(ll* ara, ll start, ll stopPlusOne) {
    For (i, start, stopPlusOne) {
        scl(ara[i]);
    }
}

void solve() {
    scl(n);
    for (ll i = 1; i*i <= n; i += 2) {
        if (n%i == 0) {
            if (i%2==1 and i != 1) {
                prYes;
                return;
            }
            if ((n/i)%2==1) {
                prYes;
                return;
            }
        }
    }
    prNo;
}

void solve2() {
    cin >> str;
    a = 0;
    For (i, 0, str.length()) a += str[i] - '0';

    if (a%1==1) prYes;
    else prNo;
}

void solve3() {
    scl(n);
    a = 2;
    while (true) {
        if (n == a) {
            prNo;
            return;
        }
        a *= 2;
        if (a > n) break;
    }

    prYes;
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve3();
}
