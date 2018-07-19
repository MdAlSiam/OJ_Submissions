#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll n;
	while(scanf("%lld", &n) == 1){
		ll ara[n+1], fcs[n+1], bcs[n+1], x;
		for(ll i = 0; i < n; i++){
			scanf("%lld", &x);
			ara[i] = x;
			fcs[i] = x;
			bcs[i] = x;
		}

		/*for(ll i = 0; i < n; i++){
			cout << "Test " << ara[i] << " " << fcs[i] << " " << bcs[i] << endl;
		}*/

		for(ll i = 1; i < n; i++) fcs[i] += fcs[i-1];
		for(ll i = n-2; i >= 0; i--) bcs[i] += bcs[i+1];

		/*for(ll i = 0; i < n; i++){
			cout << "New Test " << ara[i] << " " << fcs[i] << " " << bcs[i] << endl;
		}*/


		ll ans = 0;
		ll fcsp = 0, bcsp = n-1;

		while(1){
			//cout << "fcsp = " << fcsp << " bcsp = " << bcsp << endl;
			if(fcsp > bcsp) break;
			if((fcsp == bcsp) /*&& (fcsp == 0 || fcsp == n-1*/ ) break;
			if(fcs[fcsp] < bcs[bcsp]) fcsp++;
			else if(fcs[fcsp] > bcs[bcsp]) bcsp--;
			else if(fcs[fcsp] == bcs[bcsp]){
				ans = fcs[fcsp];
				fcsp++;
				bcsp--;
			}
		}

		printf("%lld\n", ans);
	}
	return 0;
}
