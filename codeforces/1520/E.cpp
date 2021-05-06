#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    int nTest;
    cin >> nTest;

    while (nTest--) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        // TODO, everything

        int cs[n];
        for (int i = 0; i < n; i++) {
            cs[i] = (int)(str[i] == '*') + ((i > 0) ? cs[i-1] : 0);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            // cout << cs[i] << " c ";
            if (str[i] == '*') continue;
            ans += min(cs[i], cs[n-1]-cs[i]);
        }

        cout << ans << endl;
    }
}