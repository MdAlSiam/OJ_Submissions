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
vector<ll> pos1[26], pos2[26];

ll max_len, curr_len;

ll curr_pos_1, curr_pos_2;

void solve() {
    cin >> str1;
    cin >> str2;

    For (i, 0, 26) {
        pos1[i].clear();
        pos2[i].clear();
    }

    For (i, 0, str1.length()) {
        pos1[str1[i]-'a'].pb(i);
    }

    For (i, 0, str2.length()) {
        pos2[str2[i]-'a'].pb(i);
    }

    max_len = 0;

    for (ll firstChar = 0; firstChar < 26; firstChar++) {
        for (ll i = 0; i < pos1[firstChar].size(); i++) {
            for (ll j = 0; j < pos2[firstChar].size(); j++) {
                curr_len = 0;
                curr_pos_1 = pos1[firstChar][i];
                curr_pos_2 = pos2[firstChar][j];

                while (curr_pos_1 < str1.length() and curr_pos_2 < str2.length() \
                and str1[curr_pos_1] == str2[curr_pos_2]) {
                    curr_len++;
                    curr_pos_1++;
                    curr_pos_2++;
                }

                max_len = max(max_len, curr_len);
            }
        }
    }

    cout << str1.length() + str2.length() - 2*max_len << endl;

} 

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}