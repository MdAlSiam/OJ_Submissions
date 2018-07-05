#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	while(scanf("%d %d", &n, &m) == 2){
		int ara[n+2];
		ara[0] = 0;
		for(int i = 1; i <= n; i++) scanf("%d", ara+i);
		n++;
		ara[n] = m;

		int on[n] = {0};
		int off[n] = {0};
		for(int i = 1; i <= n; i++){
			if(i%2 == 1) {on[i] = on[i-1] + (ara[i] - ara[i-1]); off[i] = off[i-1];}
			else {off[i] = off[i-1] + (ara[i] - ara[i-1]); on[i] = on[i-1];}
		}

		int ans = on[n];
		for(int i = 1; i <= n; i++){
			if(ara[i] == ara[i-1] + 1) continue;
			if(i%2){
				int upd = on[i] - 1;
				upd += off[n] - off[i];
				ans = max(upd, ans);
			}
			else{
				int upd = on[i] + ara[i] - ara[i-1] - 1;
				upd += off[n] - off[i];
				ans = max(upd, ans);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
