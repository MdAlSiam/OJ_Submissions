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

string str;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    cin >> str;
    ll len = str.length();

    ans = inf;

    ///0000000000000011111111111111111111
    ///1111111111111100000000000000000000
    for(ll i = 0; i < len; i++){
        ll prev0, prev1, nowtolast0, nowtolast1;
        prev0 = prev1 = nowtolast0 = nowtolast1 = 0;

        for(ll j = 0; j < i; j++)
            if(str[j] == '0') prev0++;
            else prev1++;

        for(ll j = i; j < len; j++)
            if(str[j] == '0') nowtolast0++;
            else nowtolast1++;

        ans = min(ans, prev1+nowtolast0);
        ans = min(ans, prev0+nowtolast1);

    }

    prl(ans);
}
}}

/*******************************************************************************************/

