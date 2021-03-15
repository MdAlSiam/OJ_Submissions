#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        int x_axis[n], y_axis[n];
        int x_index = 0, y_index = 0;
        for (int i = 0; i < n+n; i++) {
            int x, y;
            cin >> x >> y;
            if (x < 0) x -= (x+x);
            if (y < 0) y -= (y+y);
            if (!x) y_axis[y_index++] = y;
            if (!y) x_axis[x_index++] = x;
        }

        sort(x_axis, x_axis+n);
        sort(y_axis, y_axis+n);

        double ans = 0.00000000000000000000000000000;
        for (int i = 0; i < n; i++) {
            ans += sqrt(x_axis[i]*x_axis[i]*1.00+y_axis[i]*y_axis[i]*1.00);
        }

        cout << setprecision(21) << ans << endl;
    }
}