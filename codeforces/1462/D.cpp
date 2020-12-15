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
map <ll, ll> seenAt;
ll lastCovered;

void solve() {
    scl(n);
    ll ara[n+10];
    ara[0] = 0;
    For (i, 1, n+1) scl(ara[i]);
    ll cs[n+10];
    cs[0] = 0;
    For (i, 1, n+1) cs[i] = ara[i] + cs[i-1];
    ll sum = 0;
    For (i, 1, n+1) sum += ara[i];
    seenAt.clear();
    For (i, 1, n+1) seenAt[cs[i]] = i;

    ans = inf;

    For (target, 1, sum+1) {
        /*
        seenAt.clear();
        lastCovered = 0;
        seenAt[0] = 0;
        bool gotHere = true;
        ll ansHere = 0;
        For (i, 1, n+1) {
            ll toGet = cs[i]-target;
            if (toGet < 0) {
                continue;
            }
            if (not seenAt.count(toGet)) {
                continue;
            }

            if (seenAt[toGet] != lastCovered) {
                gotHere = false;
                break;
            }
            else {
                ansHere += (i-lastCovered-1);
                lastCovered = i;
            }

            seenAt[cs[i]] = i;
        }

        if (lastCovered == n) {
            ans = min(ans, ansHere);
        }
        */
        ll targetGoesTo = target;
        ll lastCovered = 0;
        ll opHere = 0;
        while (true) {
            if (seenAt.count(targetGoesTo)) {
                opHere += seenAt[targetGoesTo] - lastCovered - 1;
                lastCovered = seenAt[targetGoesTo];
                targetGoesTo += target;
            }
            else {
                break;
            }
        }
        if (lastCovered == n) {
            ans = min(ans, opHere);
        }
    }

    cout << ans << endl;

}

int main() {
    test = 1;
    cin >> test;
    while (test--) solve();
}
