#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, l, mid, mem, kount;
    while(scanf("%lld", &n) == 1){
        kount = 0;
        mid = n / 2;
        for(l = 1; l <= mid; l++){
            mem = n - l;
            if(mem % l == 0) kount++;
        }
    cout << kount << endl;
    }
    return 0;
}
