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

ll ara[maxn];
vector<ll> v[maxn];

/*_________________________________________________________________________________________*/

void factorise(ll num){

    ll root = sqrt(num), p;

    if(num % 2 == 0){
        p = 0;
        while(num%2 == 0){
            num /= 2;
            p++;
        }
        v[2].pb(p);
    }

    for(ll i = 3; i <= root; i += 2){
        if(num % i == 0){
            p = 0;
            while(num%i == 0){
                num /= i;
                p++;
            }
            v[i].pb(p);
        }
        if(num == 1) break;
    }

    if(num != 1) v[num].pb(1);

}

int main(){
while(scl(n) == 1){

    For(i, 1, n+1) scl(ara[i]);
    For(i, 1, n+1) factorise(ara[i]);

    ll ans = 1;

    for(ll i = 2; i <= maxn; i += 2){
        if(v[i].size() < n-1) {
            if(i == 2) i = 1;
            continue;
        }
        sort(v[i].begin(), v[i].end());
        ll here;
        if(v[i].size() == n) here = v[i][1];
        else here = v[i][0];
        while(here--) ans = ans * i;
        //cout << i << " ::: " << v[i].size() << " - " << here << " - " << ans << endl;
        if(i == 2) i = 1;
    }

    prl(ans);
}}

/*******************************************************************************************/
