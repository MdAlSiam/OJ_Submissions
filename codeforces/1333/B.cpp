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

ll t, test, temp;
ll n, m, k;
ll a, b, c;
ll x, y, z;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
scl(test); while(test--){
	scl(n);
	ll ara[n], bra[n];
	For(i, 0, n) scl(ara[i]);
	For(i, 0, n) scl(bra[i]);

	ll m1in = -1, p1in = -1;

	if(ara[0] != bra[0]){
		printf("NO\n");
		continue;
	}
	
	For(i, 0, n){
		if(ara[i] == -1 && m1in == -1) m1in = i;
		if(ara[i] == 1 && p1in == -1) p1in = i;
	}

	bool no = false;
	For(i, 1, n){
		if(ara[i] == bra[i]) continue;

		if(bra[i] > ara[i]){
			//barao
			if(p1in < i && p1in != -1){}
			else {no = true; break;}
		}
		else{
			//komao
			if(m1in < i && m1in != -1){}
			else {no = true; break;}
		}
	}

	if(no) printf("NO\n");
	else printf("YES\n");
}}
///Test(Given, Scratch, Corner data, Code Counter)