/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prYes printf("YES\n")
#define prNo printf("NO\n")
#define aNewLine printf("\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005LL ///2x10^5 + 5
//#define maxn 1000006LL ///10^6 + 6
//#define maxn 1000000009LL ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
ll bra[maxn];
map<pair<ll, ll>, ll> pairMap;
map<ll, ll> araKount;
map<ll, ll> braKount;

string str;

void readArray(ll* ara, ll start, ll stopPlusOne) {
    For (i, start, stopPlusOne) {
        scl(ara[i]);
    }
}

void solve() {
    scll(n, m);
    scl(k);

    araKount.clear();
    braKount.clear();
    pairMap.clear();

    readArray(ara, 0, k);
    readArray(bra, 0, k);

    For (i, 0, k) {
        if (araKount.count(ara[i])) araKount[ara[i]] += 1;
        else araKount[ara[i]] = 1;
        if (braKount.count(bra[i])) braKount[bra[i]] += 1;
        else braKount[bra[i]] = 1;
        if (pairMap.count({ara[i], bra[i]})) pairMap[{ara[i], bra[i]}] += 1;
        else pairMap[{ara[i], bra[i]}] = 1;
    }

    ans = 0;
    
    For (i, 0, k) {
        
        araKount[ara[i]]--;
        braKount[bra[i]]--;
        pairMap[{ara[i], bra[i]}]--;

        // cout << i << " -> " << araKount[ara[i]] << " "
        //     << braKount[bra[i]] << " " << pairMap[{ara[i], bra[i]}] << " torem ";

        ll toRem = (araKount[ara[i]]+braKount[bra[i]]-pairMap[{ara[i], bra[i]}]);
        ll toAdd = k-i-1;
        ans += max(0LL, toAdd-toRem);

        // cout << toRem << " " << toAdd << " " << toAdd-toRem << endl;
    }

    prl(ans);

}

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}
