#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

ll ara[1024], fcs[1024], bcs[1024];
ll movekount, fprev, bprev, fp, bp, ftot, btot;
bool completed;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    scl(n);
    For(i, 1, n+1) scl(ara[i]);
    ara[0] = fcs[0] = ara[n+1] = bcs[n+1] = 0;

//    For(i, 1, n+2) fcs[i] = fcs[i-1] + ara[i];
//    for(ll i = n; i >= 0; i--) bcs[i] = bcs[i+1] + ara[i];

    movekount = 0;
    fprev = 0;
    bprev = 0;
    fp = 0;
    bp = n+1;
    ftot = 0;
    btot = 0;
    completed = false;

    while(1){

        ll fnow = 0;

        for(ll i = fp+1; ; i++){

            if(i == bp){
                ftot += fnow;
                completed = true;
                if(i != fp+1) movekount++;
                break;
            }

            fnow += ara[i];

            if(fnow > bprev){
                ftot += fnow;
                fp = i;
                fprev = fnow;
                movekount++;
                break;
            }
        }

        if(completed) break;

        ll bnow = 0;

        for(ll i = bp-1;;i--){
            if(i == fp){
                btot += bnow;
                completed = true;
                if(i != bp-1) movekount++;
                break;
            }
            bnow += ara[i];
            if(bnow > fprev){
                btot += bnow;
                bp = i;
                bprev = bnow;
                movekount++;
                break;
            }
        }

        if(completed) break;

    }

    printf("%lld %lld %lld\n", movekount, ftot, btot);
}
}}

/*******************************************************************************************/

