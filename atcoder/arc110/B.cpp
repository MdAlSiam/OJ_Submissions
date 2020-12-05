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

#define maxn 200005 ///2x10^5 + 5
//#define maxn 1000006 ///10^6 + 6
//#define maxn 1000000009 ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;
ll total;
ll len;
string str;

void solve() {
    total = 10000000000;
    scl(len);
    cin >> str;

    if (str == "0") {
        prl(total);
        return;
    }
    if (str == "1") {
        prl(total+total);
        return;
    }
    if (str == "00") {
        prl(z-z);
        return;
    }
    if (str == "01") {
        prl(total-1);
        return;
    }
    if (str == "10") {
        prl(total);
        return;
    }
    if (str == "11") {
        prl(total);
        return;
    }

    ll start = -1;

    if (str[0] == '1' and str[1] == '1' and str[2] == '0') {
        start = 1;
    }
    if (str[0] == '1' and str[1] == '0' and str[2] == '1') {
        start = 2;
    }
    if (str[0] == '0' and str[1] == '1' and str[2] == '1') {
        start = 3;
    }

    if (start == 1) {
        string ref = "110";
        For (i, 0, len) {
            if (str[i] != ref[i%3]) {
                start = -1;
                break;
            }
        }
    }
    if (start == 2) {
        string ref = "101";
        For (i, 0, len) {
            if (str[i] != ref[i%3]) {
                start = -1;
                break;
            }
        }
    }
    if (start == 3) {
        string ref = "011";
        For (i, 0, len) {
            if (str[i] != ref[i%3]) {
                start = -1;
                break;
            }
        }
    }

    if (start == -1) {
        prl(z-z);
        return;
    }

    ans = total;

    if (false and start == 1) {
        if (len%3 == 0) {
            ans = ans - (len/3) + 1;
            prl(ans);
            return;
        }
        else {
            ans = ans - (len/3) + 1 - 1;
            prl(ans);
            return;
        }
    }
    else {
        if (start == 1) {
            len -= 3;
        }
        if (start == 2) {
            len -= 2;
        }
        else if (start == 3) {
            len -= 1;
        }

        if (len%3 == 0) {
            ans = ans - (len/3);
            prl(ans);
            return;
        }
        else {
            ans = ans - (len/3) - 1;
            prl(ans);
            return;
        }
    }



}

int main() {
    test = 1;
    //scl(test);
    while (test--) solve();
}