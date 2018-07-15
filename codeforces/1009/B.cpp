#include <bits/stdc++.h>

using namespace std;

map <int, int> mp;

int main(){
	string x;
	while(cin >> x){
		int len = x.length();
		for(int i = 0; i < len; i++) mp[x[i] - '0']++;
		int zz = 0, oo = 0, tt = 0, j, unprodactiveatlast = 0;
		for(int i = 0; i < len; i++){
			if(x[i] == '0' && tt > 0){
				j = i;
				unprodactiveatlast = 1;
				break;
			}
			else if(x[i] == '0') zz++;
			else if(x[i] == '2') tt++;
		}
		for(int i = 0; i < zz; i++) printf("0");
		for(int i = 0; i < mp[1]; i++) printf("1");
		for(int i = 0; i < tt; i++) printf("2");
		if(unprodactiveatlast)
			for(int i = j ; i < len; i++)
				if(x[i] == '0' || x[i] == '2') printf("%c", x[i]);
		printf("\n");
		mp.clear();
	}
	return 0;
}
