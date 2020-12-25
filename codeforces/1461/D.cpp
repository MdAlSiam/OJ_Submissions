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
ll a, b, c, ans, u, q;
ll x, y, z = -1, maxi, mini;

vector<ll> v;
map<ll, ll> possibleAnswers;

void findPossibleAnswers(ll lo, ll hi) {
    // printf("-> %lld %lld\n", lo, hi);
    if (lo > hi) return;
    if (lo == hi) {
        possibleAnswers[v[lo]] = 1;
        return;
    }
    ll mid = v[lo]+(v[hi]-v[lo])/2;
    ll sum = 0;
    ll secondSegmentStarts = -1;
    For (i, lo, hi+1) {
        sum += v[i];
        if (secondSegmentStarts == -1 and v[i] > mid) 
            secondSegmentStarts = i;
    }
    possibleAnswers[sum] = 1;
    if (secondSegmentStarts == -1) return;
    findPossibleAnswers(lo, secondSegmentStarts-1);
    findPossibleAnswers(secondSegmentStarts, hi);
}

void solve() {
    scll(n, q);
    v.clear();
    For (i, 0, n) {
        scl(t);
        v.pb(t);
    }
    sort(v.begin(), v.end());
    possibleAnswers.clear();
    findPossibleAnswers(0, n-1);
    while(q--) {
        ll querySum;
        scl(querySum);
        if (possibleAnswers.count(querySum)) printf("Yes\n");
        else printf("No\n");
    }
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
