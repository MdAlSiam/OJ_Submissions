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
ll n, m, k, kount;
ll a, b, c, ans;
ll x, y, z;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    scll(n, m);
    scll(x, y);

    char grid[n+3][m+3];

    for(ll i = 0; i < n; i++)
        scanf(" %s", grid[i]);

    for(ll i = 0; i <= m; i++)
        grid[n][i] = '*';
    for(ll i = 0; i <= n; i++)
        grid[i][m] = '*';

//        for(ll i = 0; i <= n; i++)
//        printf("%s\n", grid[i]);


    ans = kount = 0;

    for(ll i = 0; i < n; i++){
        for(ll j = 0; j <= m; j++){

            if((grid[i][j] == '*') && (j > 0) && (grid[i][j-1] == '.')){

                ll dub = kount/2;
                ll single = kount%2;

                ll dam1 = dub*y + single*x;
                ll dam2 = kount*x;

                ans += min(dam1, dam2);

                kount = 0;
            }
            else if(grid[i][j] == '.') kount++;
        }
    }

    prl(ans);

}
}}

/*******************************************************************************************/

