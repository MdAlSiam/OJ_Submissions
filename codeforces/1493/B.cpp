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

bool isValidReflection(ll hours, ll minutes) {
    if ((0 <= hours%10 and hours%10 <= 2) or hours%10==5 or hours%10==8) {
        hours /= 10;
        if ((0 <= hours and hours <= 2) or hours==5 or hours==8) {
            if ((0 <= minutes%10 and minutes%10 <= 2) or minutes%10==5 or minutes%10==8) {
                minutes /= 10;
                if ((0 <= minutes%10 and minutes%10 <= 2) or minutes%10==5 or minutes%10==8) {
                    return true;
                }
            }
        }
    }
    return false;
}

void solve() {
    ll maxH, maxM;
    ll hh, mm;
    scll(maxH, maxM);
    scanf("%lld:%lld", &hh, &mm);

    while(true) {
        if (isValidReflection(hh, mm)) {

            ll mirrorH;
            ll mirrorM;

            if (hh%10==2) mirrorH = 50;
            else if (hh%10==5) mirrorH = 20;
            else mirrorH = (hh%10)*10;
            if (hh/10==2) mirrorH += 5;
            else if (hh/10==5) mirrorH += 2;
            else mirrorH += (hh/10);

            if (mm%10==2) mirrorM = 50;
            else if (mm%10==5) mirrorM = 20;
            else mirrorM = (mm%10)*10;
            if (mm/10==2) mirrorM += 5;
            else if (mm/10==5) mirrorM += 2;
            else mirrorM += (mm/10);

            // printf("hh:mm=%lld:%lld -> %lld:%lld\n", hh, mm, mirrorM, mirrorH);

            if (0 <= mirrorM and mirrorM < maxH and 0 <= mirrorH and mirrorH < maxM)  {
                if (hh < 10) printf("0");
                printf("%lld:", hh);
                if (mm < 10) printf("0");
                printf("%lld", mm);
                aNewLine;
                break;
            }
        }
        mm++;
        if (mm==maxM) {
            mm = 0;
            hh++;
            if (hh==maxH) {
                hh = 0;
            }
        }
    }
} 

int main() {
    test = 1;
    scl(test);
    while (test--) solve();
}