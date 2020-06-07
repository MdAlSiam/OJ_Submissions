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

ll arr[200005], brr[200005];
ll pos1[maxn], pos2[maxn], posdiffkount[maxn];

/*_________________________________________________________________________________________*/

int main(){
//while(scl(test) == 1){
//while(test--){
    scl(n);
    For(i, 1, n+1){
        scl(t);
        pos1[t] = i;
    }
    For(i, 1, n+1){
        scl(t);
        pos2[t] = i;
    }
    ans = -1;
    For(i, 1, n+1){
        ll dif = pos1[i] - pos2[i];
        if(dif < 0) dif += n;
        posdiffkount[dif]++;
        ans = max(ans, posdiffkount[dif]);
    }
    prl(ans);
}
//}//}

/*******************************************************************************************/

