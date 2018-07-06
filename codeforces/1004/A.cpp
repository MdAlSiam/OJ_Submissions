#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, d;
	while(scanf("%d %d", &n, &d) == 2){
		int ans = 2;
		int ara[n];
		for(int i = 0; i < n; i++) scanf("%d", ara+i);
		for(int i = 1; i < n; i++){
			if(ara[i] - ara[i-1] == 2*d) ans++;
			if(ara[i] - ara[i-1] > 2*d) ans += 2;
		}
		printf("%d\n", ans);
	}
	return 0;
}

