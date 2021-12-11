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
vector<ll> adj_list[400005];
ll degree[400005];
ll visited[400005];
string str;

void solve() {
    scll(n, k);
    
    For (i, 0, n+1) {
        adj_list[i].clear();
        degree[i] = 0;
        visited[i] = 0;
    }

    For (i, 0, n-1) {
        scll(u, v);
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

        degree[u]++;
        degree[v]++;
    }

    vector<ll> as_q;

    For (i, 1, n+1) {
        if (degree[i] <= 1) {
            as_q.push_back(i);
            visited[i] = 1;
        }
    }

    ll rem = n;

    For (cut, 0, k) {
        if (rem == 0) break;

        vector<ll> new_q;

        for (ll node : as_q) {
            rem--;

            for (ll adj : adj_list[node]) {
                degree[adj]--;
                if (!visited[adj] and degree[adj] <= 1) {
                    new_q.push_back(adj);
                    visited[adj] = 1;
                }
            }
        }

        as_q = new_q;
    }

    prl(rem);
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve();
}