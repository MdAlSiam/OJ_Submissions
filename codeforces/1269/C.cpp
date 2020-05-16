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

string in, seg, ans1, ans2;

/*_________________________________________________________________________________________*/

int main(){
while(scll(n, k) == 2){

    cin >> in;

    seg = ans1 = ans2 = "";
    For(i, 0, k) seg += in[i];

    ll full = n/k;
    ll extra = n%k;
    while(full--) ans1 += seg;
    For(i, 0, extra) ans1 += seg[i];
    if(ans1 >= in){
        cout << n << endl;
        cout << ans1 << endl;
        continue;
    }

    ll sum, carry = 1;
    for(ll i = k-1; i >= 0; i--){
        ll dig = seg[i] - '0';
        sum = (dig + carry) % 10;
        carry =  (dig + carry) / 10;
        seg[i] = sum + '0';
        if(carry == 0) break;
    }

    full = n/k;

    while(full--) ans2 += seg;
    For(i, 0, extra) ans2 += seg[i];
    if(ans2 >= in){
        cout << n << endl;
        cout << ans2 << endl;
        continue;
    }
}}

/*******************************************************************************************/

