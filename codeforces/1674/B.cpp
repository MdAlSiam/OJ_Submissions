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

ll x, y, z = -1, maxi, mini, xx, yy, zz;
ll t, test, temp;
ll n, m, k, kount, kase, total, sum;
ll a, b, c, d, ans, ansHere, u, v;
ll lo, hi, mid, start, stop;
string str;
bool yes;
// ll ara[maxn];
vector<ll> vc;
map<string, ll> mp;

void solve() {
    cin >> str;
    ans = 0;
    ans += (str[0]-'a')*25 + (str[1]-'a');
    if (str[1] < str[0]) ans++;
    prl(ans);
}

void precalculate() {
    kount = 0;
    for (char first = 'a'; first <= 'z'; first++) {
        for (char second = 'a'; second <= 'z'; second++) {
            if (first == second) continue;

            kount++;
            string word = "";
            word += first;
            word += second;
            mp[word] = kount;
            db cout << word << " " << mp[word] << endl;
        }
    }
}

void solve2() {
    cin >> str;
    cout << mp[str] << endl;
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    precalculate();
    while (test--) solve2();
}

/*
    0. Clear your head, leave all the messed up things of messed up life aside, be cool
    1. Statements and Limits
    2. Examples Simulation
    3. Solution Idea
    4. Genralisation; Checking with Examples and Scratch Cases; Corner Cases
    5. Coding the Idea Consciously
*/