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

/*_________________________________________________________________________________________*/

struct info{
    ll len;
    ll left;
    ll right;

    info(ll _left, ll _right){
        left = _left;
        right = _right;
        len = _right - _left + 1;
    }

    bool operator < (const info &arg) const{
        if(len == arg.len) return left > arg.left;
        return len < arg.len;
    }
};

priority_queue<info> pq;

int main(){
while(scl(test) == 1){
while(test--){
    scl(n);
    while(!pq.empty()) pq.pop();
    pq.push(info(1, n));

    ll toadd = 0;

    while(!pq.empty()){
        info now = pq.top();
        pq.pop();
        ll mid = (now.left + now.right) / 2;
        ara[mid] = ++toadd;
        if(now.left <= mid-1) pq.push(info(now.left, mid-1));
        if(mid+1 <= now.right) pq.push(info(mid+1, now.right));
    }

    For(i, 1, n+1) printf("%lld ", ara[i]);
    printf("\n");
}
}}

/*******************************************************************************************/
