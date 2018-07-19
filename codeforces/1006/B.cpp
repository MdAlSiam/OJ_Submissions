#include <bits/stdc++.h>

using namespace std;

#define ll long long

map <ll, ll> mp;

int main(){
	ll n, k;
	while(scanf("%lld %lld", &n, &k) == 2){
		ll ara[n+1], temp[n+1], segment[k+1], ans = 0;

		for(ll i = 0; i < n; i++){
			ll tt;
			scanf("%lld", &tt);
			ara[i] = tt;
			temp[i] = tt;
		}

		sort(temp, temp+n);

		for(ll i = n-1; i > n-1-k; i--){
			ans += temp[i];
			mp[temp[i]]++;
		}

		ll sin = 0;

		for(ll i = 0; i < n; i++){
			if(mp[ara[i]]){
				segment[sin++] = i+1;
				mp[ara[i]]--;
			}
		}

		/*///Test
		for(ll i = 0; i < k; i++){
			printf("segment[%lld] = %lld\n", i, segment[i]);
		}*/


		ll add = segment[k-1];
		add = n - add;

		ll ansseg[k+1];
		ansseg[0] = segment[0];

		for(ll i = 1; i < k; i++){
			ansseg[i] = segment[i] - segment[i-1];
		}

		/*///Test
		for(ll i = 0; i < k; i++){
			printf("new ansseg[%lld] = %lld\n", i, ansseg[i]);
		}*/


		ansseg[k-1] += add;

		printf("%lld\n", ans);
		for(ll i = 0; i < k; i++) printf("%lld ", ansseg[i]);
		printf("\n");
		mp.clear();
	}
	return 0;
}
