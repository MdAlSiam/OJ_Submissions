#include <bits/stdc++.h>
using namespace std;

bool mp[8008];
int16_t n, ara[8008], sum, kount;

void solve(){
    scanf("%d", &n);
    for(int16_t i = 0; i < n; i++){
        scanf("%d", ara+i);
        mp[i] = false;
    }
    mp[n] = false;

    for(int16_t i = 0; i < n; i++){
        sum = ara[i];
        for(int16_t j = i+1; j < n; j++){
            sum = sum + ara[j];
            if(sum <= n) mp[sum] = true;
            else break;
        }
    }

    kount = 0;
    for(int16_t i = 0; i < n; i++)
        if(mp[ara[i]]) kount++;

    printf("%d\n", kount);
}

int main(){
    int16_t test;
    scanf("%d", &test);
    while(test--) solve();
}
