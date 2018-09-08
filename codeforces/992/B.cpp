#include <bits/stdc++.h>

#define ll long long int

using namespace std;

ll gcd(ll a, ll b){
	if(a % b == 0) return b;
	return gcd(b, a%b);
}

int main(){
	ll l, r, x, y, k1, k2, ybx;
	scanf("%lld %lld %lld %lld", &l, &r, &x, &y);
	if((y % x) != 0){printf("0\n"); return 0;}
	ybx = y / x;
	ll kount = 0;
	for(ll k1 = 1; k1*k1 <= ybx; k1++){
		if(ybx % k1 == 0) k2 = ybx / k1;
		else continue;
		if((l <= k1*x) && (l <= k2*x) && (k1*x <= r) && (k2*x <= r) && (gcd(k1, k2) == 1)){
			if(k1*k1 == ybx) kount++;
			else kount += 2;
		}
	}
	printf("%lld\n", kount);
}
