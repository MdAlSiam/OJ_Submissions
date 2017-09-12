#include<stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);

	if(n>2){
		for(i=2; i<=n; i++){
			printf("%d ",i);
		}
		printf("1\n");
	}
	else printf("-1\n");

}
