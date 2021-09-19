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
#define db                  if (debug)

#define ON(n, i)            (n|(1LL<<i))
#define OFF(n, i)           (n&(~(1LL<<i)))
#define CHK(n, i)           (n&(1LL<<i))

#define For(i, x, y)        for (ll i = x; i < y; i++)
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

ll t, test;
ll k, kase;
ll ans;
ll maxi;

ll ara[30];
string str;

vector<ll> vals;

void solve() {
    cin >> str;

    db cout << "Got the string " << str << endl;

    cin >> k;

    db cout << "Got the k " << k << endl;

    maxi = 0;
    For (i, 0, 26) {
        cin >> ara[i];
        maxi = max(maxi, ara[i]);
    }

    db printf("Got here Got maxi = %lld\n", maxi);

    vals.clear();

    if (maxi <= ara[str[0]-'a']) while (k--) vals.push_back(maxi);

    db printf("Got Here : Size = %lld\n", vals.size());

    ll len = str.length();

    For (i, 0, str.length()) {
        if (i > 0 and ara[str[i-1]-'a'] < maxi and maxi <= ara[str[i]-'a']) 
            while (k--) vals.push_back(maxi);
        vals.push_back(ara[str[i]-'a']);

        db printf("Got Here %lld : Size = %lld\n", i, vals.size());
    }
    db printf("Ended Here : Size = %lld\n", vals.size());

    ll last = str[len-1]-'a';
    if (maxi > ara[last]) {while (k--) {vals.push_back(maxi);}}
    db printf("Finally Here : Size = %lld\n", vals.size());

    For (i, 0, vals.size()) ans += (i+1)*vals[i];

    cout << ans << endl;
} 

void solve2() {
    cin >> str;
    scl(k);
    maxi = 0;
    For (i, 0, 26) {
        scl(ara[i]);
        maxi = max(maxi, ara[i]);
    }

    ans = 0;
    For (i, 0, str.length()) ans += (i+1)*(ara[str[i]-'a']);
    For (i, 0, k) ans += (i+str.length()+1)*maxi;

    prl(ans);
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    // scl(test);
    while (test--) solve2();
}