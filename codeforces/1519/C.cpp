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
string str;

vector<ll> vec[maxn];
vector<ll> cs[maxn];

void solve() {
    scl(n);

    For (i, 0, n+1) {
        vec[i].clear();
        // cs[i].clear();
    }

    ll uni[n];
    ll score[n];

    For (i, 0, n) scl(uni[i]);
    For (i, 0, n) scl(score[i]);

    For (i, 0, n) {
        vec[uni[i]-1].pb(score[i]);
        // cout << uni[i]-1 << " %%% " << score[i] << endl;
    }

    For (i, 0, n) {
        // cout << "! i = " << i << endl;

        if (vec[i].size() == 0) {
            continue;
        }

        sort(vec[i].rbegin(), vec[i].rend());

        For (j, 1, vec[i].size()) {
            vec[i][j] += vec[i][j-1];
        }

        // cout << ">>> " << i << " :: " << vec[i][vec[i].size()-1] << endl;
    }

    ll answers[n];
    Mem(answers, 0);

    For (uni_no, 0, n) {

        if (vec[uni_no].size() == 0) continue;

        // For (j, 0, vec[uni_no].size()) {
        //     cout << "@ " << vec[uni_no][j] << " ";
        // }
        // aNewLine;
        
        For (team_size, 1, vec[uni_no].size()+1) {
            ll toCut = vec[uni_no].size() % team_size;

            // cout << "## " << toCut << " " << vec[uni_no].size()-1-toCut << " val " << vec[uni_no][vec[uni_no].size()-1-toCut] << endl;
            
            if (vec[uni_no].size()-1-toCut >= 0)
            answers[team_size-1] += vec[uni_no][vec[uni_no].size()-1-toCut];
        }

    }

    For (i, 0, n) {
        cout << answers[i] << " ";
    }

    // aNewLine;
} 

int32_t main() {
    test = 1;
    scl(test);
    while (test--) solve();
}