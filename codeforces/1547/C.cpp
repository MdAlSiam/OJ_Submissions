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
ll a, b, c, ans[500], u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn], bra[maxn];
string str;

void solve() {
    scl(k);
    scll(n, m);

    For (i, 0, n) scl(ara[i]);
    For (i, 0, m) scl(bra[i]);

    ll ansIndex = 0;
    ll araIndex = 0;
    ll braIndex = 0;

    // while (araIndex < n or braIndex < m) {
    //     printf(">> %lld %lld\n", araIndex, braIndex);
    //     if (araIndex < n and ara[araIndex] == 0) {
    //         k++;
    //         ans[ansIndex++] = 0;
    //         araIndex++;
    //     }
    //     else if (braIndex < m and bra[braIndex] == 0) {
    //         k++;
    //         ans[ansIndex++] = 0;
    //         braIndex++;
    //     }
    //     else if (araIndex < n and ara[araIndex] == 0) {
    //         if (ara[araIndex] <= k) ans[ansIndex++] = ara[araIndex++];
    //         // else ans[0] = -1;
    //     }
    //     else if (braIndex < m and bra[braIndex] != 0) {
    //         if (bra[braIndex] <= k) ans[ansIndex++] = bra[braIndex++];
    //         // else ans[0] = -1;
    //     }
    //     else break;
    // }

    while (araIndex < n or braIndex < m) {
        // printf("!! %lld %lld :: %lld %lld :: ", araIndex, braIndex, ara[araIndex], bra[braIndex]);
        if (araIndex < n and ara[araIndex] == 0 and braIndex < m and bra[braIndex] == 0) {
            k++;
            ans[ansIndex] = ara[araIndex];
            // printf("> %lld inserted to %lld\n", ara[araIndex], ans[ansIndex]);
            ansIndex++;
            araIndex++;
            k++;
            ans[ansIndex] = bra[braIndex];
            // printf(">> %lld inserted to %lld\n", bra[braIndex], ans[ansIndex]);
            ansIndex++;
            braIndex++;
        }
        else if (araIndex < n and ara[araIndex] == 0) {
            k++;
            ans[ansIndex] = ara[araIndex];
            // printf(">>> %lld inserted to %lld\n", ara[araIndex], ans[ansIndex]);
            ansIndex++;
            araIndex++;
        }
        else if (braIndex < m and bra[braIndex] == 0) {
            k++;
            ans[ansIndex] = bra[braIndex];
            // printf(">>>> %lld inserted to %lld\n", bra[braIndex], ans[ansIndex]);
            ansIndex++;
            braIndex++;
        }
        else if (araIndex < n and ara[araIndex] <= k and ara[araIndex] >= 1) {
            ans[ansIndex] = ara[araIndex];
            // printf("* %lld inserted to %lld\n", ara[araIndex], ans[ansIndex]);
            ansIndex++;
            araIndex++;
        }
        else if (braIndex < m and bra[braIndex] <= k and bra[braIndex] >= 1) {
            ans[ansIndex] = bra[braIndex];
            // printf("** %lld inserted to %lld\n", bra[braIndex], ans[ansIndex]);
            ansIndex++;
            braIndex++;
        }
        else {
            break;
        }
    }

    if (araIndex >= n and braIndex >= m) {
        For (i, 0, ansIndex) printf("%lld ", ans[i]);
        aNewLine;
    }
    else {
        printf("-1\n");
    }
} 
 
int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}