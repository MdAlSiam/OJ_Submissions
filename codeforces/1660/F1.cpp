/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define scd(x)              scanf("%lf", &x)
#define scdd(x, y)          scanf("%lf %lf", &x, &y)
#define db                  if (debug)

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

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7

#define maxn                200005LL ///2x10^5 + 5

bool debug = false;

ll x, y, z = -1, maxi, mini;
ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;

ll ara[maxn];
string str;

void solve() {
    cin >> n;
    cin >> str;

    // cout << str << " inputted" << endl;

    ll cs[str.length()];
    ll cs2[str.length()];

    ll prev = 0;
    ll prev2 = 0;

    For (i, 0, str.length()) {
        if (str[i] == '+') cs[i] = prev + 2;
        else cs[i] = prev + 1;
        prev = cs[i];

        // printf("%lld ~", cs[i]);

        if (str[i] == '+') cs2[i] = prev2 + 1;
        else cs2[i] = prev2 - 1;
        prev2 = cs2[i];
    }
    // aNewLine;

    ans = 0;

    For (start, 0, str.length()-1) {
        For (stop, start+1, str.length()) {

            ll sum;
            if (start-1 >= 0) sum = cs[stop]-cs[start-1];
            else sum = cs[stop];

            ll sum2 = -1;
            if (start-1 >= 0) {
                if (cs2[stop] == cs2[start-1]) {
                    sum2 = 0;
                }
            }
            else {
                if (cs2[stop] == 0) {
                    sum2 = 0;
                }
            }

            if (sum%3 == 0 or sum2 == 0) {
                ans++;
            }
        }
    }

    prl(ans);
} 

void solve2() {
    cin >> n;
    cin >> str;

    ll cs_plus[str.length()];
    ll cs_minus[str.length()];

    ll prev_plus = 0;
    ll prev_minus = 0;

    For (i, 0, str.length()) {
        if (str[i] == '+') cs_plus[i] = prev_plus + 1;
        else cs_plus[i] = prev_plus;
        prev_plus = cs_plus[i];

        if (str[i] == '-') cs_minus[i] = prev_minus + 1;
        else cs_minus[i] = prev_minus;
        prev_minus = cs_minus[i];
    }

    ans = 0;

    For (start, 0, str.length()-1) {
        For (stop, start+1, str.length()) {
            ll nPluses, nMinuses;

            if (start-1 >= 0) {
                nPluses = cs_plus[stop]-cs_plus[start-1];
                nMinuses = cs_minus[stop]-cs_minus[start-1];
            }
            else {
                nPluses = cs_plus[stop];
                nMinuses = cs_minus[stop];
            }

            if (nPluses == nMinuses) {
                // printf(">");prll(start, stop);
                ans++;
            }
            else if ((nMinuses > nPluses and (2*nPluses+nMinuses)%3 == 0)) {
                // printf(">>");prll(start, stop);
                ans++; 
            }
        }
    }

    prl(ans);
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve2();
}