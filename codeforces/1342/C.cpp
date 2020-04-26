
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

void fileornot(){
	#ifndef ONLINE_JUDGE
		//freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll t, test, temp;
ll n, m, k;
ll a, b, c, q;
ll x, y, z;

int main(){
fileornot();
scl(test); while(test--){

    scll(a, b);
    scl(q);

    ll cs[a*b+10];
    cs[0] = 0;

    For(i, 1, a*b+10){
        x = i;
        if( (x%a)%b != (x%b)%a ) cs[i] = 1 + cs[i-1];
        else cs[i] = cs[i-1];
    }

    while(q--){

        ll lt, rt;
        scll(lt, rt);

        lt--;

        ll koybar = lt / (a*b);
        ll aro = lt % (a*b);
        ll bad = koybar*cs[a*b] + cs[aro];

        koybar = rt / (a*b);
        aro = rt % (a*b);
        ll tot = koybar*cs[a*b] + cs[aro];

        printf("%lld ", tot-bad);
    }
    printf("\n");
}}
///Test(Given, Scratch, Corner data, Code Counter)
