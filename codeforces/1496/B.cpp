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
string str;
map<ll, ll> present;

void solve() {
    scll(n, k);
    present.clear();
    For (i, 0, n) {
        scl(ara[i]);
        present[ara[i]] = 1;
    } 

    sort(ara, ara+n);

    ll minNumNotPresent = 0;
    for (ll i = 1; i < n and ara[0]==0; i++)  {
        if (ara[i-1]+1 != ara[i]) {
            minNumNotPresent = ara[i-1]+1;
            break;
        }
    }
    if (ara[0]==0 and minNumNotPresent==0) minNumNotPresent = ara[n-1]+1;

    if (k == 0) {
        prl(present.size());
        return;
    }

    ll candidate = (ara[n-1]+minNumNotPresent+1)/2;
    if (present.count(candidate)) {
        prl(present.size());
        return;
    }
    else if (candidate < ara[n-1]){
        prl(1+present.size());
        return;
    }
    else {
        prl(present.size()+k);
    }

} 

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}