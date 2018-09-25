#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll n, k;
	while(scanf("%lld %lld", &n, &k) == 2){
		if((n - k) > k){
			printf("%lld\n", n*k);
			for(ll i = 1; i <= n; i++){
				for(ll j = 1; j <= k; j++){
					ll x = i+j;
					if(x > n) x -= n;
					printf("%lld %lld\n", i, x);
				}
			}
		}
		else printf("-1\n");
	}
}
