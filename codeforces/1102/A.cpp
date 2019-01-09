#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int n;
    cin >> n;
    if(n & 1){
        int jora = (n+1) / 2;
        if(jora & 1) cout << 1 << endl;
        else cout << 0 << endl;
    }
    else{
        int jora = (n) / 2;
        if(jora & 1) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
