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
#define prys printf("YES\n")
#define prno printf("NO\n")

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
ll a, b, c, ans, u, l, v;
ll x, y, z = -1, maxi, mini;
dd len;
dd position[maxn];

void solve() {
    scl(n);
    scd(len);

    For(i, 0, n) scd(position[i]);

    dd lPos = 0, rPos = len, lSpeed = 1, rSpeed = 1, totalTime = 0;
    ll lp = 0, rp = n-1;

    while (lp <= rp) {
        dd lDist = position[lp] - lPos;
        dd rDist = rPos - position[rp];
        dd lTime = lDist / lSpeed;
        dd rTime = rDist / rSpeed;

        if (lTime < rTime) {
            totalTime += lTime;

            lPos = position[lp];
            lp++;

            rPos -= rSpeed*lTime;

            lSpeed++;
        }
        else {
            totalTime += rTime;

            rPos = position[rp];
            rp--;

            lPos += lSpeed*rTime;

            rSpeed++;
        }
    }

    dd _ =  (rPos-lPos) / (lSpeed+rSpeed);
    _ += totalTime;

    printf("%.10lf\n", _);

}

int main() {
    test = 1;
    while (scl(test) == 1)
    while (test--) solve();
}

