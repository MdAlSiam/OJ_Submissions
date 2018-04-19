#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define scl(x) scanf("%lld", &x)

int main(){
	ll num;
	while(scl(num) == 1){
		if(num == 1){
			printf("1\n");
			continue;
		}
		ll range = num / 2;
		printf("%lld\n", range+1);
	}
	return 0;
}
