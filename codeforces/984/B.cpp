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
	ll row, col, kount;
	while(scanf("%lld %lld", &row, &col) == 2){
        char ara[row+1][col+1];
        For(i, 0, row) scanf("%s",ara[i]);

        For(i, 0, row){
            For(j, 0, col){
                if (ara[i][j] == '.') ara[i][j] = '0';

                if(ara[i][j] != '*'){
                    kount = 0;
                    For(w, -1, 2){
                            For(z, -1, 2){
                                if(ara[i+w][j+z] == '*') kount++;
                            }
                    }
                    if(kount != ara[i][j] - '0'){
                        printf("NO\n");
                        return 0;
                    }
                }
            }
        }
        printf("YES\n");
	}
	return 0;
}
