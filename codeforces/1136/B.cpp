#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n, pos;
    while(scanf("%lld %lld", &n, &pos) == 2){
        ll mc;
        if(pos == 1 || pos == n) mc = n-1;
        else{
        ll dl, dr;
        dl = abs(pos - 1);
        dr = abs(pos-n);

        if(dl < dr) mc = 2*dl+dr;
        else mc = 2*dr+dl;}

        printf("%lld\n", mc+2*n+1);
    }
}
