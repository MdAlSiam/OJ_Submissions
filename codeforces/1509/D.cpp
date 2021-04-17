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
vector<string> str0max, str1max;
string str;
ll kount0;
string ret;

string mixStrings(string str1, string str2, char ch) {
    // cout << "Debug: " << str1 << " " << str2 << endl;

    ret = "";
    ll fp = 0, sp = 0;
    For (i, 0, n) {
        // cout << "i = " << i << endl;
        while (fp < str1.size() and str1[fp] != ch) {ret += str1[fp]; fp++;}
        // cout << "First: " << ret << endl;
        while (sp < str2.size() and str2[sp] != ch) {ret += str2[sp]; sp++;}
        // cout << "Second: " << ret << endl;
        ret += ch;
        // cout << "Final: " << ret << endl;
        fp++;
        sp++;
    }
    For (i, fp, str1.size()) ret += str1[i];
    // cout << "First Final: " << ret << endl;
    For (i, sp, str2.size()) ret += str2[i];
    // cout << "Second Final: " << ret << endl;
    return ret;
}

void solve() {
    str0max.clear();
    str1max.clear();

    cin >> n;

    For (i, 0, 3) {
        cin >> str;
        kount0 = 0;
        For (j, 0, str.length()) {
            if (str[j] == '0') {
                kount0++;
            }
        }

        if (kount0 >= n) {
            str0max.pb(str);
        }
        else {
            str1max.pb(str);
        }
    }

    if (str0max.size() > str1max.size()) {
        cout << mixStrings(str0max[0], str0max[1], '0') << endl;
    }
    else {
        cout << mixStrings(str1max[0], str1max[1], '1') << endl;
    }
} 

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}

