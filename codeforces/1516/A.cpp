#include <bits/stdc++.h>
using namespace std;

int main() {
    int nTest;
    cin >> nTest;

    while (nTest--) {
        int n, k;
        cin >> n >> k;

        int ara[n];
        for (int i = 0; i < n; i++) cin >> ara[i];

        for (int i = 0; i < n-1; i++) {
            int removable = min(k, ara[i]);

            ara[i] -= removable;
            ara[n-1] += removable;

            k -= removable;

            if (not k) break;
        }

        for (int i = 0; i < n; i++) cout << ara[i] << " ";
        cout << endl;
    }
}