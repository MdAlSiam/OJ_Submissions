#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        char x[n+10];
        scanf("%s", &x);
        ll kount = 0;
        for(ll i = 1; i < n; i++){
            if(i == n-1){
                if(x[i] == x[i-1]){
                    if(x[i-1] == 'R'){x[i] = 'B'; kount++;}
                    else if(x[i-1] == 'G'){x[i] = 'B'; kount++;}
                    else if(x[i-1] == 'B'){x[i] = 'G'; kount++;}
                }
            }
            else if(x[i] == x[i-1]){
                if(x[i] == 'R' && x[i+1] == 'R') {x[i] = 'G'; kount++;}
                else if(x[i] == 'R' && x[i+1] == 'B') {x[i] = 'G'; kount++;}
                else if(x[i] == 'R' && x[i+1] == 'G') {x[i] = 'B'; kount++;}

                else if(x[i] == 'G' && x[i+1] == 'G') {x[i] = 'B'; kount++;}
                else if(x[i] == 'G' && x[i+1] == 'B') {x[i] = 'R'; kount++;}
                else if(x[i] == 'G' && x[i+1] == 'R') {x[i] = 'B'; kount++;}

                else if(x[i] == 'B' && x[i+1] == 'B') {x[i] = 'G'; kount++;}
                else if(x[i] == 'B' && x[i+1] == 'G') {x[i] = 'R'; kount++;}
                else if(x[i] == 'B' && x[i+1] == 'R') {x[i] = 'G'; kount++;}
            }
        }

        printf("%lld\n", kount);
        printf("%s\n", x);
    }
}


