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
    cin >> str;
    cout << str << " in" << endl;
    
    ll lastSeen[26][str.length()];

    for (ll j = str.length()-1; j >= 0; j--) {
        for (ll i = 0; i < 26; i++) {

            // prll(i, j);

            if (i == str[j]-'a') {
                lastSeen[i][j] = j;
            }
            else {
                if (j+1 < str.length()) lastSeen[i][j] = lastSeen[i][j+1];
                else lastSeen[i][j] = -1;
            }
        }
    }

    For (i, 0, 26) {
        For (j, 0, str.length()) {
            printf("%lld ", lastSeen[i][j]);
        }
        aNewLine;
    }

    return;

    ans = 0;

    ll curr_index = 0;
    ll curr_char = '#';

    while (curr_index < str.length()) {
        if (curr_char == '#') {
            curr_char = str[curr_index];
            if (curr_index+1 < str.length()) curr_index = lastSeen[curr_char][curr_index+1];
            else curr_index = -1;

            if (curr_index == -1) {
                curr_index += 1;
            }

            cout << ">" << curr_index << " ";
        }
        else if (curr_char == str[curr_index]) {
            curr_char = '#';
            curr_index += 1;
            ans += 2;

            cout << ">>" << curr_index << " "; 
        }
    }

    prl(str.length()-ans);
}  


void solve2() {
    cin >> str;
    map<char, ll> seen;
    seen.clear();

    ans = 0;

    For (i, 0, str.length()) {
        if (seen[str[i]] == 1) {
            seen.clear();
            ans += 2;
        }
        else {
            seen[str[i]] = 1;
        }
    }

    prl(str.length()-ans);
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve2();
}