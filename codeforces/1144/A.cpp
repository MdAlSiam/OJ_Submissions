#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    string x;
    ll n;
    cin >> n;
    while(cin >> x){
        ll len = x.length();
        vector <char> v;
        for(ll i = 0; i < len; i++)
            v.push_back(x[i]);
        sort(v.begin(), v.end());
        bool ok = true;
        for(ll i = 1; i < len; i++){
            if(v[i-1] + 1 != v[i]){
                ok = false;
                break;
            }
        }
        if(ok) printf("YES\n");
        else printf("NO\n");
    }
}
