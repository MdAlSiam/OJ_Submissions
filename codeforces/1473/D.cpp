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
    scll(n, k);
    cin >> str;
    str = "#" + str;
    ll vals[n+1];
    ll fmax[n+1], fmin[n+1], bmax[n+1], bmin[n+1];
    fmax[0] = fmin[0] = 0;
    ll num = 0;
    vals[0] = 0;
    For (i, 1, n+1) {
        if (str[i] == '+') num++;
        else num--;
        // printf("~%lld ", num);
        fmax[i] = max(fmax[i-1], num);
        fmin[i] = min(fmin[i-1], num);
        vals[i] = num;
    }
    // aNewLine;
    bmax[n] = bmin[n] = num;
    for (ll i = n-1; i > 0; i--) {
        if (str[i+1] == '+') num--;
        else num++;
        // printf("!%lld ", num);
        bmax[i] = max(bmax[i+1], num);
        bmin[i] = min(bmin[i+1], num);
    }
    // aNewLine;

    while (k--) {
        ll lt, rt;
        scll(lt, rt);
        ll fMaxHere = fmax[lt-1];
        ll fMinHere = fmin[lt-1];
        // prll(fMaxHere, fMinHere);
        if (rt == n) {
            prl(fMaxHere-fMinHere+1);
            continue;
        }
        ll bMaxHere = bmax[rt+1];
        ll bMinHere = bmin[rt+1];
        // prll(bMaxHere, bMinHere);
        
        ll endPos;
        if (str[rt+1] == '+')  endPos = vals[lt-1]+1;
        else endPos = vals[lt-1]-1;
        ll shiftingVal = endPos-vals[rt+1];
        bMaxHere += shiftingVal;
        bMinHere += shiftingVal;
        // prll(bMaxHere, bMinHere);

        cout << max(fMaxHere, bMaxHere) - min(fMinHere, bMinHere) + 1 << endl;
    }
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
