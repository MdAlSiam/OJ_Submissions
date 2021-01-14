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

void solve() {
    scl(n);
    string str1, str2;
    cin >> str1;
    cin >> str2;
    ll len1 = str1.length();
    ll len2 = str2.length();
    ll gcd = __gcd(len1, len2);
    ll lcm = (len1*len2)/gcd;

    ll n1 = lcm/len1;
    ll n2 = lcm/len2;

    string new1 = "", new2 = "";

    For (i, 0, n1) new1 += str1;
    For (i, 0, n2) new2 += str2;

    For (i, 0, new1.length()) {
        if (new1[i] != new2[i]) {
            prl(z);
            return;
        }
    }

    cout << new1 << endl;
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
