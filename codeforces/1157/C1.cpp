#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        ll ara[n+5];
        for(ll i = 0; i < n; i++)
            scanf("%lld", ara+i);
        ll lp = 0, rp = n-1;
        ll prev = -1;
        ll kount = 0;
        string ans = "";
        while(lp <= rp){
            if(lp == rp && ara[lp] > prev){
                kount++;
                ans += "R";
                break;
            }
            else if(lp == rp) break;
            else if(prev < ara[lp] && ara[lp] <= ara[rp]){
                kount++;
                ans += "L";
                prev = ara[lp];
                lp++;
            }
            else if(prev < ara[rp] && ara[rp] <= ara[lp]){
                kount++;
                ans += "R";
                prev = ara[rp];
                rp--;
            }
            else if(prev < ara[lp]){
                kount++;
                ans += "L";
                prev = ara[lp];
                lp++;
            }
            else if(prev < ara[rp]){
                kount++;
                ans += "R";
                prev = ara[rp];
                rp--;
            }
            else break;
        }

        printf("%lld\n", kount);
        cout << ans << endl;
    }
}

