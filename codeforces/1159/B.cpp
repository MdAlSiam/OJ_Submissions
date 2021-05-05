#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1 << 30;

    int ara[n];
    for (int i = 0; i < n; i++) {
        cin >> ara[i];

        ans = min(ans, ara[i]/max(i+1-1, n-i-1));
    }

    cout << ans << endl;

}