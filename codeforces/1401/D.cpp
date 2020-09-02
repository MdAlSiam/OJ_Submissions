/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prys printf("YES\n")
#define prno printf("NO\n")

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;
vector<ll> adj_list[100005];
vector<ll> nPaths;
vector<ll> subtreeSize;
vector<ll> weights;

ll dfs(ll dad, ll son) {
    ll nSubtreeNodes = 1;
    for (ll grandson:adj_list[son]) {
        if (grandson == dad) continue;
        nSubtreeNodes += dfs(son, grandson);
    }

    if (son != 1) nPaths.pb(nSubtreeNodes*(n-nSubtreeNodes));

    return nSubtreeNodes;
}

void solve(){
    scl(n);

    For (i, 1, n+1) {
        adj_list[i].clear();
    }
    nPaths.clear();
    subtreeSize.clear();
    weights.clear();

    For (i, 1, n) {
        scll(u, v);
        adj_list[u].pb(v);
        adj_list[v].pb(u);
    }

    scl(m);
    For (i, 0, m) {
        scl(t);
        weights.pb(t);
    }

    ll _ = dfs(0, 1);

    sort(nPaths.rbegin(), nPaths.rend());
    sort(weights.rbegin(), weights.rend());

    ans = 0;

    if (weights.size() <= nPaths.size()) {
        For (i, 0, nPaths.size()) {
            if (i < weights.size()) {
                ans = ( (ans%mod)+((nPaths[i]*weights[i])%mod) )%mod;
            }
            else {
                ans = ((ans%mod)+((nPaths[i]%mod)))%mod;
            }
        }
    }
    else {
        ll extra = weights.size() - nPaths.size();
        temp = 1;
        For (i, 0, extra+1) {
            temp = ((temp%mod)*(weights[i]%mod))%mod;
        }
        ans = ((ans%mod)+((nPaths[0]*temp)%mod))%mod;
        For (i, 1, nPaths.size()) {
            ans = ((ans%mod)+((nPaths[i]*weights[i+extra])%mod))%mod;
        }
    }

    prl(ans);
}

int main(){
    test = 1;
    while(scl(test) == 1)
    while(test--) solve();
}
