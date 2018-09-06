#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll n, k;
	while(scanf("%lld %lld", &n, &k) == 2){
		char str[n+2];
		ll occur[k+2] = {0};
		scanf("%s", str);
		ll mini = INT_MAX;
		for(ll i = 0; i < n; i++){
			occur[str[i] - 'A']++;
		}
		sort(occur, occur+k);
		ll ans = occur[0] * k;
		printf("%lld\n", ans);
	}
}
