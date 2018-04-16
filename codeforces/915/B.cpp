#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll n, pos, a, b, ans;
	while(scanf("%lld %lld %lld %lld", &n, &pos, &a, &b) == 4){
		if(a == 1 && b == n){
			ans = 0;
		}
		else if(a == 1){
			ans = abs(b - pos) + 1;
		}
		else if(b == n){
			ans = abs(a - pos) + 1;
		}
		else{
			ans = min(abs(a - pos), abs(b-pos)) + 1 + abs(b - a) + 1;
		}

		printf("%lld\n", ans);
	}

	return 0;
}
