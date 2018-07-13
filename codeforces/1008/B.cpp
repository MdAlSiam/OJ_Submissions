#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) == 1){
		int w[n+1], h[n+1];
		for(int i = 0; i < n; i++) scanf("%d %d", w+i, h+i);
		int ww = min(w[0], h[0]);
		int hh = max(w[0], h[0]);
		w[0] = ww;
		h[0] = hh;
		int yes = 1;
		for(int i = 1; i < n && yes; i++){
			int prev_h = h[i-1];
			if(w[i] <= prev_h && h[i] <= prev_h){
				int ww = min(w[i], h[i]);
				int hh = max(w[i], h[i]);
				w[i] = ww;
				h[i] = hh;
			}
			else if(w[i] <= prev_h){
				swap(w[i], h[i]);
			}
			else if(h[i] <= prev_h){}
			else yes = 0;
		}
		if(yes) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
