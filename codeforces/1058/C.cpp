#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(scanf("%d", &n) == 1){
		char cara[n+3];
		int nara[n+3];
		scanf("%s", &cara);
		for(int i = 0; i < n; i++) nara[i] = cara[i] - '0';

		int sum = 0;
		for(int i = 0; i < n; i++) sum += nara[i]; //cout << "sum = " << sum << endl;

		int possible = 0;

		//if(n == 2 && nara[0] == nara[1] ) {printf("YES\n"); continue;}
		if(sum == 0) {printf("YES\n"); continue;}

		for(int i = 1; i <= (sum/2); i++){
			if(sum % i == 0){
				//cout << "divisor i = " << i << endl;
				int temp = 0;
				for(int k = 0; k < n; k++){
					temp += nara[k];
					if(temp == i) temp = 0;
				}
				if(temp == 0){
					possible = 1;
					break;
				}
			}
		}
		if(possible) printf("YES\n");
		else printf("NO\n");
	} //e
}
