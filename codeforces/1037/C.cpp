#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) == 1){
		char a[n+2], b[n+2];
		scanf("%s", a);
		scanf("%s", b);

		int cost = 0;

		for(int i = 0; i < n; i++){
			if(a[i] == b[i]) {}
			else if(a[i] == b[i+1] && b[i] == a[i+1]){
				swap(a[i], a[i+1]);
				cost++;
			}
			else if(a[i] != b[i]){
				a[i] = b[i];
				cost++;
			}

		}
		printf("%d\n", cost);
	}
}
