#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, d;
	scanf("%d %d", &n, &d);
	int m;
	scanf("%d", &m);

	while(m--){
		int x, y;
		scanf("%d %d", &x, &y);

		if(x+y >= d && x+y <= n+n-d && x-y >= -d && x-y <= d)
			printf("YES\n");
		else printf("NO\n");
	}
}
