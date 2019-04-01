#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    string x;
    while(cin >> x){

        ll len = x.length();

        ll finans = 1;

        for(ll i = 0; i < len; i++){
            finans *= (x[i] - '0');
            //cout << x[i];
        }
        //cout << endl;

        for(ll i = 0; i < len; i++){
            //if(x[i] == '0') break;
            //cout << i << " ";

            ll ans = 1;
            for(ll j = 0; j < i; j++){
                ans *= (x[j] - '0');
                //cout << x[j]-'0';
            }

            if(x[i] != '1') ans *= (x[i] - '0' - 1);
            //cout << x[i]-'0'-1;}
            //else cout << '1';

            for(ll j = i+1; j < len; j++){
                ans *= 9;
                //cout << 9;
            }

            finans = max(ans, finans);
            //cout << " " << ans << endl;;
        }

        printf("%lld\n", finans);
    }///End
}
