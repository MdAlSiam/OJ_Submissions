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
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
ll evens[maxn];
ll odds[maxn];
string str;

void merge_sort(ll* ara, ll lo, ll hi) {
    if (lo == hi) {
        return;
    }

    ll mid = lo + (hi - lo) / 2;

    merge_sort(ara, lo, mid);
    merge_sort(ara, mid+1, hi);

    ll i, j, k, temp[hi-lo+1], kk;

    for (i = lo, j = mid+1, k = 0, kk = lo; kk <= hi; k++, kk++) {
        if (i == mid+1) {
            temp[k] = ara[j++];
        }
        else if (j == hi+1) {
            temp[k] = ara[i++];
        }
        else if (ara[i] < ara[j]) {
            temp[k] = ara[i++];
        }
        else {
            temp[k] = ara[j++];
        }
    }

    for (kk = lo, k = 0; kk <= hi; k++, kk++) {
        ara[kk] = temp[k];
    }
}

ll gcd(ll a, ll b) {
    if (a%b == 0) return b;
    return gcd(b, a%b);
}

void solve() {
    scl(n);
    For (i, 0, n) {
        scl(ara[i]);
        if (ara[i]%2) ara[i] += 100000;
    }
    
    // merge_sort(ara, 0, n-1);
    sort(ara, ara+n);

    For (i, 0, n) {
        if (ara[i]%2) ara[i] -= 100000;
    }

    ans = 0;

    for (ll i = n-1; i >= 0; i--) {
        for (ll j = i-1; j >= 0; j--) {
            if (__gcd(2*ara[i], ara[j]) > 1) {
                ans++;
            }
        }
    }

    prl(ans);
} 
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}