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
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

std::vector<ll> adj_list[maxn];
std::vector<ll>::iterator it;
ll level[maxn];
ll subordinate[maxn];
ll profit[maxn];

void searc_h(ll dad, ll son){

	level[son] = level[dad] + 1;
	subordinate[son] = 1;

	for(ll i = 0; i < adj_list[son].size(); i++){
		ll son_of_son = adj_list[son][i];
		if(son_of_son == dad) continue;

		searc_h(son, son_of_son);

		subordinate[son] += subordinate[son_of_son];
	}

	profit[son] = subordinate[son] - 1 - level[son];

}

int main(){
fileornot();
//scl(test); while(test--){

	scll(n, k);

	For(i, 1, n){
		scll(x, y);
		adj_list[x].pb(y);
		adj_list[y].pb(x);
	}

	level[0] = -1;

	searc_h(0, 1);

	sort(profit+1, profit+n+1, greater<ll>());

	ll ans = 0;

	for(ll i = 1; i <= n-k; i++) ans += profit[i];

	printf("%lld\n", ans);

}//}
///Test(Given, Scratch, Corner data, Code Counter)
