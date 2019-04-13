#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, m, mm;
    scanf("%lld %lld %lld", &n, &m, &mm);
    ll w[m+10], l[n+10];
    for(ll i = 1; i <= m; i++){
        scanf("%lld", &w[i]);
    }
    for(ll i = 1; i <= n; i++){
        scanf("%lld", &l[i]);
    }
    ll mat[n+10][m+10];
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= m; j++){
            scanf("%lld", &mat[i][j]);
            if(mat[i][j] == 0) continue;
            mat[i][j] = min(l[i], w[j]);
        }
    }
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= m; j++)
            printf(j == m ? "%lld\n" : "%lld ", mat[i][j]);
}
