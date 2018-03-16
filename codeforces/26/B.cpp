#include <bits/stdc++.h>
using namespace std;

int main(){
	char x[1000006];
	scanf(" %[^\n]", x);
	int len = strlen(x);
	int saving = 0, ans = 0;
	for(int i = 0; i < len; i++){
		if(x[i] == '(') saving++;
		else{
			if(saving - 1 >= 0) {
				saving--;
				if(saving >= 0) ans += 2;
			}
		}
		///cout << i+1 << " " << saving << " " << ans << endl;
	}
	printf("%d\n", ans);
	return 0;
}
