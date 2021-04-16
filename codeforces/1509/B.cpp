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
vector<ll> tIndexes, mIndexes;

void solve() {

    cin >> n;
    cin >> str;

    ll tKount = 0, mKount = 0;

    ll lastMIndex = -1;

    // tIndexes.clear();
    // mIndexes.clear();

    For (i, 0, str.length()) {
        if (str[i] == 'T') {
            tKount++;
            // tIndexes.pb(i);
        }
        else {
            mKount++;
            lastMIndex = i;
            // mIndexes.pb(i);
        }
    }

    if (2*mKount != tKount) {
        prNo;
        return;
    }

    if (str[0] != 'T' or str[n-1] != 'T') {
        prNo;
        return;
    }

    // ll lo = 0, hi = tIndexes.size()-1;
    // ll loM = 0, hiM = mIndexes.size()-1;

    /*
    while (lo < hi) {
        ll d1 = (tIndexes[lo]-mIndexes[loM]);
        ll d2 = (tIndexes[hi]-mIndexes[hiM]);

        if (d1 <= d2 and tIndexes[lo] < mIndexes[loM] and mIndexes[loM] < tIndexes[hi]) {
            loM++;
        }
        else if (tIndexes[lo] < mIndexes[hiM] and mIndexes[hiM] < tIndexes[hi]) {
            hiM--;
        }
        else {
            prNo;
            return;
        }
        lo++;
        hi--;
    }

    prYes;
    */

    t = 0;

    For (i, 0, n) {
        if (str[i] == 'T') {
            t++;
        }
        else {
            t--;
            if (t < 0) {
                prNo;
                return;
            }

            // if (i == lastMIndex and t != 0)  {
            //     prNo;
            //     return;
            // }

            // if (i == lastMIndex and n-i-1 != mKount) {
            //     prNo;
            //     return;
            // }
        }
    }


    t = 0;
    for (ll i = n-1; i >= 0; i--) {
        if (str[i] == 'T') {
            t++;
        }
        else {
            t--;
            if (t < 0) {
                prNo;
                return;
            }

            // if (i == lastMIndex and t != 0)  {
            //     prNo;
            //     return;
            // }

            // if (i == lastMIndex and n-i-1 != mKount) {
            //     prNo;
            //     return;
            // }
        }
    }

    prYes;
} 




int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}