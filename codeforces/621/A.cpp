#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
	ll n;
	while(scanf("%lld", &n) == 1){
		ll x, oddsum = 0, evensum = 0, minodd = INT_MAX, oddkount = 0;
		for(ll i = 0; i < n; i++){
			scanf("%lld", &x);
			if(x & 1){
				oddkount++;
				oddsum += x;
				if(x < minodd) minodd = x;
			}
			else{
				//evenkount++;
				evensum += x;
				//if(x < mineven) mineven = x;
			}
		}
		ll ans = oddsum + evensum;
		if(oddkount % 2 != 0) ans -= minodd;
		printf("%lld\n", ans);
	}
}
