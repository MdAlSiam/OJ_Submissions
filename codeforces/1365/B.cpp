using namespace std;
#include <bits/stdc++.h>

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
ll n, m, k, kount;
ll a, b, c, ans;
ll x, y, z;

ll ara[550];

bool zer0, on1, sorted;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    zer0 = on1 =  false;
    sorted = true;

    scl(n);
    For(i, 0, n) {
        scl(ara[i]);
        if(i == 0) continue;
        if(ara[i] >= ara[i-1]);
        else sorted = false;
    }

    For(i, 0, n){
        scl(t);
        if(t) on1 = true;
        else zer0 = true;
    }

    if(sorted) printf("Yes\n");
    else if(on1 && zer0) printf("Yes\n");
    else printf("No\n");
}
}}

/*******************************************************************************************/
