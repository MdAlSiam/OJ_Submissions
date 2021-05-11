#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int n, k, q;
    cin >> n >> k >> q;

    int ara[n];
    int displayed[k];

    for (int i = 0; i < n; i++) cin >> ara[i];

    for (int i = 0; i < k; i++) displayed[i] = -1;

    while (q--) {
        int queryType, valueIndex;
        cin >> queryType >> valueIndex;
        int value = ara[valueIndex-1];

        if (queryType == 1) {
            if (value > displayed[0]) {
                displayed[0] = value;
                sort(displayed, displayed+k);
            }
        }
        else {
            int found = false;
            for (int i = 0; i < k; i++) {
                if (value == displayed[i]) {
                    cout << "YES" << endl;
                    found = true;
                    break;
                }
            }
            if (not found) cout << "NO" << endl;
        }
    }
}