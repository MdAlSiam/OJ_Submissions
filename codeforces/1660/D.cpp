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

ll x, y, z = -1, maxi, mini;
ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;
vector<ll> zeroIndices;

ll ara[maxn];
string str;

void solve() {
    zeroIndices.clear();
    zeroIndices.push_back(-1LL);

    scl(n);
    For (i, 0LL, n) {
        scl(ara[i]);
        if (ara[i] == 0LL) {
            zeroIndices.push_back(i);
        }
    }
    zeroIndices.push_back(n);

    ll maxTwosInSegment = 0LL;
    ll maxSegmentStart = -1LL;
    ll maxSegmentStop = -1LL;

    For (i, 1, zeroIndices.size()) {
        ll start = zeroIndices[i-1]+1;
        ll stop = zeroIndices[i]-1;

        if (start > stop) {
            continue;
        } 

        ll totalTwo = 0LL;
        ll twoFromStart = 0LL;
        ll twoFromEnd = 0LL;
        ll startNegetive = -1LL;
        ll endNegative = -1LL;
        ll twosRemainsHere;
        ll totalNegetive = 0;

        For (j, start, stop+1) {
            totalTwo += (abs(ara[j]) == 2LL);
            totalNegetive += (ara[j] < 0LL);
        }

        if (totalNegetive%2 == 0LL) {
            twosRemainsHere = totalTwo;
            if (twosRemainsHere > maxTwosInSegment) {
                maxTwosInSegment = twosRemainsHere;
                maxSegmentStart = start;
                maxSegmentStop = stop;
            }
            continue;
        }

        // if (totalNegetive == 1LL and start == stop) {
        //     continue;
        // }

        For (j, start, stop+1) {
            twoFromStart += (abs(ara[j]) == 2LL);
            if (ara[j] < 0LL) {
                startNegetive = j;
                break;
            }
        }

        for (ll j = stop; j >= start; j--) {
            twoFromEnd += (abs(ara[j]) == 2LL);
            if (ara[j] < 0LL) {
                endNegative = j;
                break;
            }
        }

        if (startNegetive != -1) {
            if (twoFromStart < twoFromEnd) {
                twosRemainsHere = totalTwo-twoFromStart;
                if (twosRemainsHere > maxTwosInSegment) {
                    maxTwosInSegment = twosRemainsHere;
                    maxSegmentStart = startNegetive+1;
                    maxSegmentStop = stop;
                }
            }
            else {
                twosRemainsHere = totalTwo-twoFromEnd;
                if (twosRemainsHere > maxTwosInSegment) {
                    maxTwosInSegment = twosRemainsHere;
                    maxSegmentStart = start;
                    maxSegmentStop = endNegative-1;
                }
            }
        }

        // printf("Calculations\n");
        // prll(start, stop);
        // prll(maxSegmentStart, maxSegmentStop);
    }

    if (maxSegmentStart == -1LL) {
        prll(z-z, n);
        return;
    }

    // printf("---------\n");
    // prll(maxSegmentStart, maxSegmentStop);
    prll(maxSegmentStart, n-maxSegmentStop-1);
} 
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve();
}