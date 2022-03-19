#include <bits/stdc++.h>
using namespace std;

int main() {
    int nTest;
    cin >> nTest;
    
    while (nTest--) {
        int n;
        cin >> n;
        
        int ek = 0, ok = 0;
        
        for (int i = 0; i < n+n; i++) {
            int t;
            cin >> t;
            if (t & 1) ok++;
            else ek++;
        }
        
        if (ek == ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}