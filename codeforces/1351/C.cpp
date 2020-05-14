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

#define maxn 100005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k;
ll a, b, c, ans;
ll x, y, z;

char str[maxn];
map < pair< pll, pll >, bool > mp;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    mp.clear();

    scanf(" %s", str);

    ans = 0;

    pll prev = {0, 0};

    for(ll i = 0; str[i]; i++){
        pll curr = prev;
        if(str[i] == 'N') curr.ss++;
        if(str[i] == 'S') curr.ss--;
        if(str[i] == 'E') curr.ff++;
        if(str[i] == 'W') curr.ff--;

//        printf("Debug:\n");
//        prll(prev.ff, prev.ss);
//        prll(curr.ff, curr.ss);

        if(mp.count({prev, curr})) ans++;
        else{
            ans += 5;
            mp[{prev, curr}] = true;
            mp[{curr, prev}] = true;
        }

        prev = curr;

    }

    prl(ans);
}
}}

/*******************************************************************************************/

