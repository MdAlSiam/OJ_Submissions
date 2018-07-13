#include <bits/stdc++.h>

using namespace std;

int main(){
	string x;
	cin >> x;
	int len = x.length();
	int kount = 0;
	int mod[3] = {0};
	for(int i = 0; i < len; i++){
		int num = x[i] - '0';
		num %= 3;

		if(num == 0){
			kount++;
			mod[1] = 0;
			mod[2] = 0;
		}
		mod[num]++;
		if(mod[1] >= 3 || mod[2] >= 3 || (mod[1] >= 1 && mod[2] >= 1)){
			kount++;
			mod[1] = 0;
			mod[2] = 0;
		}
	}
	printf("%d\n", kount);
	return 0;
}
