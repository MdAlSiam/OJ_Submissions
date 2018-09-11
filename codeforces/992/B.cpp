#include <bits/stdc++.h>

using namespace std;

#define ll long long int

ll gcd(ll a, ll b){if (b == 0) return a ; return gcd(b, a % b);}

int main(){
	ll l, r, x, y;
	scanf("%lld %lld %lld %lld", &l, &r, &x, &y);
	if((y % x) != 0){printf("0\n"); return 0;}
	ll ybx = y / x;
	ll k1, k2, ans = 0;
	for(k1 = 1; k1*k1 <= ybx; k1++){
		if(ybx % k1 != 0) continue;
		k2 = ybx / k1;
		if((gcd(k1, k2) == 1) && (l <= k1*x) && (k1*x <= r) && (l <= k2*x) && (k2*x <= r) )
			if(k1*k1 == ybx) ans++;
			else ans += 2;
	}
	printf("%lld\n", ans);
}
