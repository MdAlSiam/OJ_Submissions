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
ll a, b, c, ans;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    cin >> n >> k;
    cin >> str;

    ll first, last;

    For (i, 0, n) {
        if (str[i] == '*') {
            first = i;
            break;
        }
    }

    for (ll i = n-1; i >= 0; i--) {
        if (str[i] == '*')  {
            last = i;
            break;
        }
    }

    if (first == last) ans = 1;
    else ans = 2;

    ll op1 = 0, op2 = 0;

    for (ll i = first; i < last; i += k+1) {
        if (i == first) continue;
        while (str[i] != '*') i--;
        op1++;
    }

    for (ll i = last; i > first; i -= (k+1)) {
        if (i == last) continue;
        while (str[i] != '*') i++;
        op2++;
    }

    cout << ans+min(op1,op2) << endl;
} 

vector<ll> v;

void solve2() {
    cin >> n >> k;
    cin >> str;
    v.clear();
    For (i, 0, n) {
        if (str[i] == '*') v.pb(i);
    }

    if (v.size() == 1) {
        prl(-z);
        return;
    }

    ans = 2;
    ll op1 = 0, op2 = 0;
    ll lastTaken = v[0];
    For (i, 1, v.size()) {
        if (v[i]-lastTaken > k) {
            op1++;
            lastTaken = v[i-1];
        }
    }

    cout << ans+op1 << endl;
}

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve2();
}