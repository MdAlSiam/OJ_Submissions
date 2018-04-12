#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define pi acos(-1)
#define pf printf

int main(){
	ll n, a, b, kount;
	while(scanf("%lld %lld %lld", &n, &a, &b) == 3){
		char str[n+1];
		scanf("%s", str);
		kount = 0;
		for(ll i = 0; i < n; i++){
			if(str[i] == '*') continue;
			if(i == 0 || str[i-1] == '*' || str[i-1] == '.'){
				if(a >= b && a > 0)
					str[i] = 'a', a--, kount++;
				else if(b >= a && b > 0)
					str[i] = 'b', b--, kount++;
				continue;
			}
			if(str[i-1] == 'a'){
				if(b > 0) str[i] = 'b', b--, kount++;
			}
			if(str[i-1] == 'b'){
				if(a > 0) str[i] = 'a', a--, kount++;
			}
		}
		pf("%lld\n", kount);
	}
}
