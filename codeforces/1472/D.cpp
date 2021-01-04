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

void solve() {
    scl(n);
    ll evenNumbers[n];
    ll oddNumbers[n];
    ll evenIndex = 0;
    ll oddIndex = 0;
    For (i, 0, n) {
        scl(t);
        if (t & 1) oddNumbers[oddIndex++] = t;
        else evenNumbers[evenIndex++] = t;
    }

    sort(oddNumbers, oddNumbers+oddIndex, greater<ll>());
    sort(evenNumbers, evenNumbers+evenIndex, greater<ll>());

    a = b = 0;

    ll oddPointer = 0;
    ll evenPointer = 0;

    while (true) {
        // Alice - Even favorite
        if (oddPointer >= oddIndex and evenPointer >= evenIndex) break;
        if (oddPointer < oddIndex and evenPointer < evenIndex) {
            if (evenNumbers[evenPointer] > oddNumbers[oddPointer]) {
                a += evenNumbers[evenPointer];
                evenPointer++;
            }
            else {
                oddPointer++;
            }
        }
        else if (evenPointer < evenIndex and oddPointer >= oddIndex) {
            a += evenNumbers[evenPointer];
            evenPointer++;
        }
        else if (oddPointer < oddIndex and evenPointer >= evenIndex) {
            oddPointer++;
        }
        // Bob - Odd Favorite
        if (oddPointer >= oddIndex and evenPointer >= evenIndex) break;
        if (oddPointer < oddIndex and evenPointer < evenIndex) {
            if (oddNumbers[oddIndex] > evenNumbers[evenIndex]) {
                b += oddNumbers[oddIndex];
                oddIndex++;
            }
            else {
                evenIndex++;
            }
        }
        else if (oddPointer < oddIndex and evenPointer >= evenIndex) {
            b += oddNumbers[oddIndex];
            oddPointer++;
        }
        else if (evenPointer < evenIndex and oddPointer >= oddIndex) {
            evenPointer++;
        }
    }

    if (a > b) printf("Alice\n");
    else if (b > a) printf("Bob\n");
    else printf("Tie\n");
}

void solve2() {
    scl(n);
    ll ara[n];
    For (i, 0, n) scl(ara[i]);
    sort(ara, ara+n, greater<ll>());
    a = b = 0;
    For (i, 0, n) {
        if (i%2 == 0) {
            if (ara[i]%2 == 0) a += ara[i];
        }
        else {
            if (ara[i] & 1) b += ara[i];
        }
    }
    if (a > b) printf("Alice\n");
    else if (b > a) printf("Bob\n");
    else printf("Tie\n");
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve2();
}
