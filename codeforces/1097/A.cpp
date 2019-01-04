#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    string t, h;
    cin >> t;
    bool possible = false;
    for(int i = 0; i < 5; i++){
        cin >> h;
        if(t[0] == h[0]) possible = true;
        if(t[1] == h[1]) possible = true;
    }
    if(possible) cout << "YES" << endl;
    else cout << "NO" << endl;
}
