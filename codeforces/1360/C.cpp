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

ll evenk, oddk;
bool adj;

ll ara[56];

/*_________________________________________________________________________________________*/

int main(){
    scl(test);
    while(test--){
        scl(n);
        evenk = oddk = 0;
        adj = false;

        For(i, 0, n){
           scl(ara[i]);
           if(ara[i] & 1) evenk++;
           else oddk++;
        }

        sort(ara, ara+n);
        For(i, 1, n){
            if(ara[i-1]+1 == ara[i]) adj = true;
        }

        bool ok = true;

        if(evenk%2 == 0 && oddk%2 == 0){}
        else if(evenk%2 == 1 && oddk%2 == 1 && adj == true){}
        else ok = false;

        if(ok) printf("YES\n");
        else printf("NO\n");
    }
}

/*******************************************************************************************/

