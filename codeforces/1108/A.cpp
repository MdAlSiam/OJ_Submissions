#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int q;
    cin >> q;
    while(q--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a != d) cout << a << " " << d << endl;
        else cout << b << " " << c << endl;
    }
}



