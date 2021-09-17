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

ll parse(ll lo, ll hi) {
    ll ret = 0;
    For (i, lo, hi+1) {
        ret *= 10;
        ret += (ll)(str[i]-'0');
    }
    return ret;
}

void solve() {
    cin >> str;
    vector<ll> plusIndices;
    plusIndices.clear();
    plusIndices.push_back(-1);

    For (i, 0, str.length()) {
        if (str[i] == '+') {
            plusIndices.pb(i);
        }
    }
    plusIndices.pb(str.length());

    vector<ll> nums;

    for (int i = 1; i < plusIndices.size(); i++) {
        ll num = parse(plusIndices[i-1]+1, plusIndices[i]-1);
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    For (i, 0, nums.size()) {
        cout << nums[i];
        if (i != nums.size()-1) cout << "+";
        else aNewLine;
    }
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    // scl(test);
    while (test--) solve();
}