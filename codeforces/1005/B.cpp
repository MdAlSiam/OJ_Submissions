#include <bits/stdc++.h>

using namespace std;

int main(){
    string x, y;
    while(cin >> x >> y){
        long long int lenx, leny, ans;
        lenx = x.length();
        leny = y.length();
        ans = lenx + leny;
        for(long long int i = lenx-1, j = leny-1; i >= 0 && j >= 0; i--, j--){
            if(x[i] != y[j]) break;
            else ans -= 2;
        }
        printf("%lld\n", ans);
    }
}
