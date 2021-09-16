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

bool debug = false;

ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    cin >> str;
    int minEvenPos = -1;
    int minEvenNumber = 8;
    For (i, 0, str.length()) {
        if ((str[i]-'0')%2 == 0) {
            if ((str[i]-'0') <= minEvenNumber) {
                minEvenNumber = (ll) (str[i]-'0');
                minEvenPos = i;
            }
        }
    }

    if (minEvenPos == -1) prl(z);
    else {
        swap(str[str.length()-1], str[minEvenPos]);
        cout << str << endl;
    }
} 

void solve2() {
    cin >> str;
    map<int, vector<int>> mp;

    for (int i = 0; i < str.size(); i++) {
        int thisDigit = (ll)(str[i]-'0');
        if (thisDigit%2 == 0) mp[thisDigit].push_back(i);
    }

    for (int i = 0; i <= 8; i += 2) {

    }
}

void solve3() {
    cin >> str;
    bool done = false;
    for (int i = 0; i < str.length(); i++) {
        if ((str[i]-'0')%2 == 0 and str[i] < str[str.length()-1]) {
            swap(str[i], str[str.length()-1]);
            done = true;
            break;
        }
    }
    if (done) {
        cout << str << endl;
        return;
    }
    for (int i = str.length()-1; i >= 0; i--) {
        if ((str[i]-'0')%2 == 0 and str[i] > str[str.length()-1]) {
            swap(str[i], str[str.length()-1]);
            done = true;
            break;
        }
    }
    if (done) {
        cout << str << endl;
        return;
    }
    cout << -1 << endl;
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    // scl(test);
    while (test--) solve3();
}