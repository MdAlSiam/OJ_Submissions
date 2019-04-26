#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll c1(0), c2(0);

    for(ll i = 0; i < n; i++){
        if(s[i] == '(') c1++;
        if(s[i] == ')') c2++;
    }

    if(n % 2 ||
       s[0] == ')' ||
       s[n-1] == '('||
        c1 > n/2 ||
        c2 > n/2 ){
          cout << ":(" << endl;
          return 0;
    }

    ll t = n/2;
    ll lagbe = t - c1;

    c1 = c2 = 0;

    for(ll i = 0; i < n; i++){
        if(s[i] == '(') c1++;
        if(s[i] == ')') c2++;
        if(s[i] == '?' && lagbe){
            s[i] = '(';
            c1++;
            lagbe--;
        }
        if(c1 == c2 && i != n-1){
            cout << ":(" << endl;
            return 0;
        }
    }

    c1 = c2 = 0;
    for(ll i = 0; i < n; i++){
        if(s[i] == '(') c1++;
        if(s[i] == ')') c2++;

        if(c1 < c2 || s[i] == '?' && c2 == c1-1 && i != n-1){
            cout << ":(" << endl;
            return 0;
        }

        if(s[i] == '?'){
            s[i] = ')';
            c2++;
        }
     }

     cout << s << endl;
}
