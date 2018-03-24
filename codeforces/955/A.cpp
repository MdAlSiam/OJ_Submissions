#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll hh, mm, h, d, c, n, spent_min; double amount, a1, a2;
	while(scanf("%lld %lld", &hh, &mm) == 2){
		scanf("%lld %lld %lld %lld", &h, &d, &c, &n);
		if(hh >= 20){
			amount = ceil(h*1.0/n) * c * 0.80;
		}
		else{
			a1 = ceil(h*1.0/n) * c;
			spent_min = 20*60 - (hh*60+mm);
			h = h + spent_min * d;
			a2 = ceil(h*1.0/n) * c * 0.80;
			(a2 <= a1) ? amount = a2 : amount = a1;
		}
		printf("%lf\n", amount);
	}
	return 0;
}

