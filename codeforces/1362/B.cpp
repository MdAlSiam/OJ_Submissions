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

ll ara1[1100], ara2[1100];

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    For(i, 0, n) scl(ara1[i]);
    sort(ara1, ara1+n);

    ans = -1;

    for(ll kk = 1; kk <= 1029; kk++){
        for(ll i = 0; i < n; i++) ara2[i] = ara1[i] ^ kk;

        sort(ara2, ara2+n);

        bool same = true;

        for(ll i = 0; i < n; i++)
            if(ara2[i] != ara1[i]) same = false;

        if(same) {ans = kk; break;}
    }

    prl(ans);
}
}}

/*******************************************************************************************/

