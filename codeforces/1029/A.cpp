#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k;

    while(cin >> n >> k){
        string str;
        cin >> str;
        int len = str.length();

        string init = "nai", toadd = "", ans = "";
        for(int i = 0; i < len-1; i++){
            string fwd = "", bwd = "";
            for(int f = 0; f <= i; f++) fwd += str[f];
            for(int b = len-1-i; b < len; b++) bwd += str[b];
            if(fwd == bwd) init = fwd;
        }

        if(init == "nai"){
            for(int i = 1; i <= k; i++) ans += str;
        }
        else{
            ans += init;
            for(int i = init.length(); i < len; i++) toadd += str[i];
            for(int i = 1; i <= k; i++) ans += toadd;
        }

        cout << ans << endl;
    } ///C
}
