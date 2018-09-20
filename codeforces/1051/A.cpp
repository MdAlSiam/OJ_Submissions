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

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

int main(){
	ll test;
	scl(test);
	while(test--){

	char given[110];
	scanf("%s", given);

	ll u = 0, l = 0, d = 0;

	ll len = strlen(given);

	for(ll i = 0; i < len; i++){
		if(given[i] >= 'A' && given[i] <= 'Z') u++;
		else if(given[i] >= 'a' && given[i] <= 'z') l++;
		else d++;
	}

	if(u > 0 && l > 0 && d > 0){printf("%s\n", given); continue;}

	if(u == 0 && l > 0 && d > 0){
		if(l > 1){
			for(ll i = 0; i < len; i++){
				if(given[i] >= 'a' && given[i] <= 'z'){
					given[i] = 'A';
					break;
				}
			}
		}
		else if(d > 1){
			for(ll i = 0; i < len; i++){
				if(given[i] >= '0' && given[i] <= '9'){
					given[i] = 'A';
					break;
				}
			}
		}
	} ///only upper nai

	else if(u > 0 && l == 0 && d > 0){
		if(u > 1){
			for(ll i = 0; i < len; i++){
				if(given[i] >= 'A' && given[i] <= 'Z'){
					given[i] = 'u';
					break;
				}
			}
		}
		else if(d > 1){
			for(ll i = 0; i < len; i++){
				if(given[i] >= '0' && given[i] <= '9'){
					given[i] = 'r';
					break;
				}
			}
		}
	} ///only lower nai

	else if(u > 0 && l > 0 && d == 0){
		if(l > 1){
			for(ll i = 0; i < len; i++){
				if(given[i] >= 'a' && given[i] <= 'z'){
					given[i] = '6';
					break;
				}
			}
		}
		else if(u > 1){
			for(ll i = 0; i < len; i++){
				if(given[i] >= 'A' && given[i] <= 'Z'){
					given[i] = '9';
					break;
				}
			}
		}
	} ///only digit nai

	else if(u == 0 && l == 0 && d > 0) given[0] = 'A', given[1] = 'a';
	else if(u > 0 && l == 0 && d == 0) given[0] = '7', given[1] = 'a';
	else if(u == 0 && l > 0 && d == 0) given[0] = 'A', given[1] = '9';

	printf("%s\n", given);

	} ///eot
}


