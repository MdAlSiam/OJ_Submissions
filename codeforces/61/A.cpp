#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    int len = a.length();
    for(int i = 0; i < len; i++){
        if(a[i] != b[i]) cout << 1;
        else cout << 0;
    }
}
