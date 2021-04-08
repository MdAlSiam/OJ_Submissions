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
ll bitKount[2];

ll ara[maxn];
string str1, str2;

void solve() {
    scl(n);
    cin >> str1;
    cin >> str2;
    str1 += '#';
    str2 += '#';
    bitKount[0] = bitKount[1] = 0;
    For (i, 0, str1.length()-1) {
        bitKount[str1[i]-'0']++;
        if (str1[i] != str2[i] and str1[i+1] == str2[i+1]) {
            // printf("+ %lld %lld %lld\n", i, bitKount[0], bitKount[1]);
            if (bitKount[0] != bitKount[1]) {
                prNo;
                return;
            }
        }
        else if (str1[i] == str2[i] and str1[i+1] != str2[i+1]) {
            // printf("! %lld %lld %lld\n", i, bitKount[0], bitKount[1]);
            if (bitKount[0] != bitKount[1]) {
                prNo;
                return;
            }
        }
    }
    prYes;
} 

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}