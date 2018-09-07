#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
	ll n;
	scanf("%lld", &n);
	ll ara[n+1], bra[n+1];
	for(ll i = 0; i < n; i++) scanf("%lld", ara+i);
	for(ll i = 0; i < n; i++) scanf("%lld", bra+i);
	sort(ara, ara+n, greater <ll>());
	sort(bra, bra+n, greater <ll>());

	ll asc = 0, bsc = 0, ap = 0, bp = 0, turn = 1;

	while(1){
		///if both has elements
		if(ap < n && bp < n){
			if(turn == 1){
				if(ara[ap] >= bra[bp]){
					asc += ara[ap];
					ap++;
				}
				else bp++;

				turn = 2;
			}
			else if(turn == 2){
				if(bra[bp] >= ara[ap]){
					bsc += bra[bp];
					bp++;
				}
				else ap++;

				turn = 1;
			}
		}

		///bra is finished
		else if(ap < n){
			if(turn == 1){
				asc += ara[ap];
				ap++;
				turn = 2;
			}
			else if(turn == 2) {ap++; turn = 1;}
		}

		///ara is finished
		else if(bp < n){
			if(turn == 1) {bp++; turn = 2;}
			else if(turn == 2){
				bsc += bra[bp];
				bp++;
				turn = 1;
			}
		}

		else break;
	}
	printf("%lld\n", asc - bsc);
}
