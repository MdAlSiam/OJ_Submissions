#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    while(cin >> x){
        int len = x.length();
        int aknt = 0;
        for(int i = 0; i < len; i++){
            if(x[i] == 'a') aknt++;
        }
        int nona = len - aknt;
        int ans;
        if(aknt > nona) ans = len;
        else ans = aknt+aknt-1;
        printf("%d\n", ans);
    }
}
