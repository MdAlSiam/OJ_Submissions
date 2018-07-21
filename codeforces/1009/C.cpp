#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll n, m;
	while(scanf("%lld %lld", &n, &m) == 2){
		ll sum = 0, mindis, maxdis, mid;
		if(n % 2){
			mid = (n-1)/2;
			mindis = 2*((mid*(mid+1))/2);
		}
		else{
			mid = n / 2;
			mindis = 2*((mid*(mid+1))/2);
			mindis -= mid;
		}
		maxdis = ((n-1)*(n))/ 2;

		while(m--){
			ll x, d;
			scanf("%lld %lld", &x, &d);
			sum += n*x;
			if(d < 0) sum += d*mindis;
			else sum += d*maxdis;
		}

		double avg = sum / (n*1.0);
		printf("%.10lf\n", avg);
	}
	return 0;
}
