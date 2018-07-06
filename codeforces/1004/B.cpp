#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, l, r;
	while(scanf("%d %d", &n, &m) == 2){
		while(m--) scanf("%d %d", &l, &r);
		for(int i = 0; i < n; i++){
			if(i%2) printf("0");
			else printf("1");
		}
		printf("\n");
	}
	return 0;
}

