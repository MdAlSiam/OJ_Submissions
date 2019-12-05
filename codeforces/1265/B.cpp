#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dd double
#define ull unsigned long long int //%llu as format specifier

#define pi acos(-1)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 100000008 ///10^8
//#define maxn 1000000009 ///10^9

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define pll pair<ll, ll> //Use space before >
#define pb push_back

ll n, m, k;
ll a, b, c, d;
ll w, x, y, z;
ll t, test, temp;

int main(){scl(test); while(test--){

    scl(n);
    ll indexes[n+4], lo[n+4], hi[n+4];

    for(ll i = 1; i <= n; i++){

        ll num;
        scl(num);

        indexes[num] = i;
    }

    for(ll i = 1; i <= n; i++){

        if(i == 1) {lo[i] = hi[i] = indexes[i]; continue;}

        if(indexes[i] < lo[i-1]) lo[i] = indexes[i];
        else lo[i] = lo[i-1];

        if(indexes[i] > hi[i-1]) hi[i] = indexes[i];
        else hi[i] = hi[i-1];
    }

    for(ll i = 1; i <= n; i++){
        if(hi[i]-lo[i]+1 == i) printf("1");
        else printf("0");
    }
    printf("\n");
}}

