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

ll scores[maxn]; 
ll maxScore;
string str;
string player_name[1100];
map<string, ll> score;
map<string, ll> score_2;
map<string, ll>::iterator it;

void solve() {
    cin >> n;
    score.clear();
    maxScore = -109910LL;
    For (i, 0, n) {
        cin >> str >> x;
        player_name[i] = str;
        scores[i] = x;
        score[str] += x;
    }

    For (i, 0, n) {
        maxScore = max(maxScore, score[player_name[i]]);
    }

    // cout << "maxScore=" << maxScore << endl;
    score_2.clear();
    For (i, 0, n) {
        score_2[player_name[i]] += scores[i];
        // cout << i << player_name[i] << " curr " << score_2[player_name[i]] << " final " << score[player_name[i]] << endl;
        if (score[player_name[i]] == maxScore and score_2[player_name[i]] >= maxScore) {
            cout << player_name[i] << endl;
            break;
        }
    }
} 

int32_t main() {
    test = 1;
    // scl(test);
    while (test--) solve();
}