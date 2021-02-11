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

ll ara[1100][1100];
ll ro_active[1100], col_active[1100];
char ch;
string str;

void solve() {
    scll(n, m);
    scl(k);
    For (i, 0, n) {
        ro_active[i] = i;
        For (j, 0, m) {
            scl(ara[i][j]);
            col_active[j] = j;
        }
    }

    while (k--) {
        getchar();
        scanf("%c %lld %lld", &ch, &a, &b);
        // printf("--%c\n", ch);
        if (ch == 'r') {
            temp = ro_active[a-1];
            ro_active[a-1] = ro_active[b-1];
            ro_active[b-1] = temp;
        }
        else if (ch == 'c') {
            temp = col_active[a-1];
            col_active[a-1] = col_active[b-1];
            col_active[b-1] = temp;
        }
        else {
            prl(ara[ro_active[a-1]][col_active[b-1]]);
        }
    }

}

int main() {
    test = 1;
    // scl(test);
    while (test--) solve();
}

// My feelings are not to be cared as well as cared