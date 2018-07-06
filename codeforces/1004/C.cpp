#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;


map <int, int> mp1;
map <int, int> mp2;

int main(){
	long long int n;
	/*while(*/scanf("%lld", &n) /* == 1){*/ ;
		long long int ara[n], forkt[n], backt[n];
		for(long long int i = 0; i < n; i++) scanf("%lld", ara+i);
		long long int fkount = 0;
		for(long long int i = 0; i < n; i++){
			if(mp1[ara[i]] == 0) fkount++;
			mp1[ara[i]]++;
			forkt[i] = fkount;
		}

		//for(int i = 0; i < n; i++) printf("%d ", forkt[i]);
		//printf("\n");

		long long int bkount = 0;
		for(long long int i = n-1; i >= 0; i--){
			if(mp2[ara[i]] == 0) bkount++;
			mp2[ara[i]]++;
			backt[i] = bkount;
		}

		//for(int i = 0; i < n; i++) printf("%d ", backt[i]);

		long long int ans = 0;
		for(long long int i = 0; i < n-1; i++){
			if(i == 0) ans += backt[i+1];
			else if(forkt[i] != forkt[i-1]) ans += backt[i+1];
		}
		printf("%lld\n", ans);
	//}
	return 0;
}
