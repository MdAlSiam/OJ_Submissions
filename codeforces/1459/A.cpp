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

#define maxn 200005 ///2x10^5 + 5
//#define maxn 1000006 ///10^6 + 6
//#define maxn 1000000009 ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

typedef struct {ll red; ll blue;}card;
bool compare1(card card1, card card2) {
    return card1.red > card2.red;
}
bool compare2(card card1, card card2) {
    return card1.blue > card2.blue;
}

ll facts[1100];

void solve() {
    scl(n);
    string str1, str2;
    cin >> str1 >> str2;
    //sort(str1.begin(), str1.end());
    //sort(str2.begin(), str2.end());

    ll red = 0, blue = 0;
    For (i, 0, n) {
        if (str1[i] > str2[i]) {
            red++;
        }
        else if (str2[i] > str1[i]) {
            blue++;
        }
    }
    /*
    card cards[n];
    For (i, 0, str1.length()) {
        cards[i].red = (str1[i]-'0');
        cards[i].blue = (str2[i]-'0');
    }

    sort(cards, cards+n, compare1);
    bool redwins = false;
    For (i, 0, n) {
        if (cards[i].blue < cards[i].red) redwins = true;
    }
    sort(cards, cards+n, compare2);
    bool bluewins = false;
    For (i, 0, n) {
        if (cards[i].red < cards[i].blue) bluewins = true;
    }
    */
    if (red > blue) printf("RED\n");
    else if (blue > red) printf("BLUE\n");
    else printf("EQUAL\n");

    //prl(facts[1000]);
}

int main() {
    facts[0] = 1;
    facts[1] = 1;
    //For (i, 2, 1100) facts[i] = facts[i-1]*i;
    test = 1;
    scl(test);
    while (test--) solve();
}
