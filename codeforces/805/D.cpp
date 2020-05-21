#include <bits/stdc++.h>
using namespace std;

#define int long long int

#define mod 1000000007

string str;
int bkount, len, ans;

int32_t main(){
    cin >> str;
    len = str.length();

    ans = 0;
    bkount = 0;

    for(int i = len-1; i >= 0; i--){
        if(str[i] == 'a'){
            ans += bkount;
            ans %= mod;
            bkount *= 2;
            bkount %= mod;
        }
        else bkount++;
    }

    printf("%d\n", ans);
}
