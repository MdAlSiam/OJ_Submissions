#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll n;
	scanf("%lld", &n);

	ll ara[n+9];
	ll mark[111];
	memset(mark, 0, sizeof(mark));

	for(ll i = 1; i <= n; i++){
		scanf("%lld", ara+i);
		mark[ara[i]]++;
	}

	ll uniqkount = 0, morethantwokount = 0;

	for(ll i = 1; i <= n; i++){
		if(mark[ara[i]] == 1) uniqkount++;
		else if(mark[ara[i]] > 2) morethantwokount++;
		else {}
	}

	if((uniqkount & 1) && (morethantwokount == 0)){
		printf("NO\n");
	}

	else if(uniqkount & 1){
		ll num1 = uniqkount / 2;
		ll num2 = 1;
		printf("YES\n");
		for(ll i = 1; i <= n; i++){
			if((mark[ara[i]] == 1) && (num1 > 0)){
				printf("A");
				num1--;
			}
			else if((mark[ara[i]] > 2 ) && (num2 > 0)){
				printf("A");
				num2--;
			}
			else printf("B");
		}
		printf("\n");
	}
	else{
		ll num1 = uniqkount / 2;
		printf("YES\n");
		for(ll i = 1; i <= n; i++){
			if((mark[ara[i]] == 1) && (num1 > 0)){
				printf("A");
				num1--;
			}
			else printf("B");
		}
		printf("\n");
	}
}
