

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long int
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

int32_t main(){

    scl(n);
    int a[n];
    For(i, 0, n) scl(a[i]);

    ans = 4-inf;

    for(ll i = -30; i <= 30; i++){
        int toremove = i;

        int sum = 0;
        bool found = false;

        for(int j = 0; j < n; j++){
            if(a[j] > toremove){
                sum = 0;
                found = false;
            }
            else if(sum+a[j] > a[j]){
                sum += a[j];
            }
            else{
                sum = a[j];
                found = false;
            }

            if(a[j] == toremove) found = true;

            if(found) ans = max(ans, sum-toremove);
        }
    }

    prl(ans);

    return 0;
}

/*******************************************************************************************/

