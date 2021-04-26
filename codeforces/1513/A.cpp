#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n, k;
        cin >> n >> k;

        int maxSupporter = n-k;
        int minPlayer = n-k+1;

        // cout << "!!! " << maxSupporter << " " << minPlayer << endl;

        if (n-maxSupporter+1 <= maxSupporter) {
            for (int i = 1; i <= maxSupporter; i++) {
                cout << i << " ";
                if (minPlayer <= n) {
                    cout << minPlayer << " ";
                    minPlayer++;
                }
            }
            if (minPlayer <= n) cout << minPlayer;
            cout << endl;
        }
        else {
            cout << "-1" << endl;
        }
    }
}