#include <bits/stdc++.h>
using namespace std;

#define int long long int 

int32_t main() {
    int nTest;
    cin >> nTest;

    while (nTest--) {
        int n;
        cin >> n;

        int nDigits = 0;
        int num = n;

        while (num > 0) {
            nDigits++;
            num /= 10;
        }

        int ans = (nDigits-1)*9;

        for (int i = 1; i <= 9; i++) {
            int candidate = 0;
            int j = 1;
            for (int index = 1; index <= nDigits; index++) {
                candidate += i*j;
                j *= 10;
            }

            // cout << "Candidate: " << candidate << endl;

            if (candidate <= n) ans++;
        }

        cout << ans << endl;
    }
}