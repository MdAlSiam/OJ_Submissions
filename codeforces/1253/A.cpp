#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){ll test; scanf("%lld", &test); while(test--){

    ll n;
    scanf("%lld", &n);

    ll a[n+2], b[n+2];
    for(ll i = 0; i < n; i++) scanf("%lld", a+i);
    for(ll i = 0; i < n; i++) scanf("%lld", b+i);

    ll lo = -1, hi = -1;

    for(ll i = 0; i < n; i++){
        if(a[i] != b[i]){
            lo = i;
            break;
        }
    }

    if(lo == -1){printf("YES\n"); continue;}

    for(ll i = n-1; i >= 0; i--){
        if(a[i] != b[i]){
            hi = i;
            break;
        }
    }

    //cout << " lo n hi = " << lo << " " << hi << endl;


    ll dif = b[lo] - a[lo];
    if(dif < 0) {printf("NO\n"); continue;}
    bool hobena = false;
    for(ll i = lo+1; i <= hi; i++){
        if(a[i]+dif == b[i]){}
        else{hobena = true; break;}
    }


    if(hobena) printf("NO\n");
    else printf("YES\n");
}}
