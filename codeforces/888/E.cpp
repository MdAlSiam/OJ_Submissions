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

ll modVal;

ll ara[40];
vector<ll> sumsFromHalfPart;

ll add(ll num1, ll num2) {
    return ((num1%modVal)+(num2%modVal))%modVal;
}

void makeSumsFromFirstHalf(ll index, ll sum) {
    if (sum != 0) {
        sumsFromHalfPart.pb(sum);
        ans = max(ans, sum);
    }
    if (index > 17 or index >= n) {
        return;
    }

    makeSumsFromFirstHalf(index+1, add(sum, ara[index]));
    makeSumsFromFirstHalf(index+1, sum);
}

void addTheRest(ll index, ll sum) {
    if (sum != 0) {
        ll maxGettable = modVal-sum-1;
        ll maxGettableAt = lower_bound(sumsFromHalfPart.begin(), sumsFromHalfPart.end(), maxGettable) - sumsFromHalfPart.begin();
        if (maxGettableAt == sumsFromHalfPart.size() or sumsFromHalfPart[maxGettableAt] > maxGettable) maxGettableAt--;
        if (maxGettableAt >= 0) ans = max(ans, sum+sumsFromHalfPart[maxGettableAt]);
        ans = max(ans, sum);
    }

    if (index >= n) return;

    addTheRest(index+1, add(sum, ara[index]));
    addTheRest(index+1, add(sum, 0));
}

void solve() {
    scll(n, modVal);
    For (i, 0, n) scl(ara[i]);
    sumsFromHalfPart.clear();
    ans = 0;
    makeSumsFromFirstHalf(0, 0);
    sort(sumsFromHalfPart.begin(), sumsFromHalfPart.end());
    addTheRest(18, 0);
    if (sumsFromHalfPart.size() > 0) ans = max(ans, sumsFromHalfPart[sumsFromHalfPart.size()-1]);
    prl(ans);
}

int main() {
    test = 1;
    // scl(test);
    while (test--) solve();
}
