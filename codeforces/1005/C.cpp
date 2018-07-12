#include <bits/stdc++.h>

using namespace std;

map <long long, long long> mp;

int main(){
	long long n;
	while(scanf("%lld", &n) == 1){
		long long ara[n+1];
		for(long long i = 0; i < n; i++){
			scanf("%lld", ara+i);
			mp[ara[i]]++;
		}
		long long kount = 0;
		for(long long i = 0; i < n; i++){
			for(long long j = 0; j <= 32; j++){
				if(j == 32){
					kount++;
					break;
				}
				long long x = (1 << j) - ara[i];
				if((mp[x] == 1 && x != ara[i]) ||  (mp[x] > 1)){
					break;
				}
			}
		}
		printf("%lld\n", kount);
		mp.clear();
	}
	return 0;
}
