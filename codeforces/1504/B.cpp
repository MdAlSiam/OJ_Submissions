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
string str1, str2;

void solve() {

    cin >> n;
    cin >> str1;
    cin >> str2;

    ll d0 = 0;
    ll d1 = 0;

    ll first = -1, last = -1;
    for (ll i = 0; i < n; i++) {
        if (str1[i] != str2[i]) {
            first = i;
            break;
        }
    }

    for (ll i = n-1; i >= 0; i--) {
        if (str1[i] != str2[i]) {
            last = i;
            break;
        }
    }

    if (first == -1) {
        prYes;
        return;
    }

    // if (first == last) {
    //     prNo;
    //     return;
    // }

    For (i, 0, n) {
        if (str1[i] == str2[i]) {
            if (str1[i] == '0') d0++;
            else d1++;
            if (i+1 < n and str1[i+1] != str2[i+1])  {
                if (d0 != d1 or d0==0 or d1==0) {
                    prNo;
                    return;
                }
                d0 = 0;
                d1 = 0;
            }
            continue;
        }

        if (str1[i] == '0' and str2[i] == '1') d0++;
        else if (str1[i] == '1' and str2[i] == '0') d1++;       

        if ((i+1 == n) or (i+1 < n and str1[i+1] == str2[i+1]))  {
            if (d0 != d1 or d0==0 or d1==0) {
                prNo;
                return;
            }
            d0 = 0;
            d1 = 0;
        }
    }

    prYes;
} 

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}