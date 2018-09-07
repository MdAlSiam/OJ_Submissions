#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	if(n <= 2){printf("No\n"); return 0;}
	printf("Yes\n");
	printf("2 1 %d\n", n);
	printf("%d", n-2);
	for(int i = 2; i < n; i++) printf(" %d", i); printf("\n");
}
