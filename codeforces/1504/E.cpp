#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    int n;
    cin >> n;

    vector<pair<int, int> > vec;
    for (int i = 0; i < n; i++) {
        int t1, t2;
        cin >> t1 >> t2;

        vec.push_back({t1, t2});
    }

    sort(vec.begin(), vec.end());

    int ans = 0;

    int max_ai_plus_ci = vec[0].first + vec[0].second; // a0+c0
    // not sure about the naming should contain the thing max, may not be updated like max I guess

    for (int i = 0; i < n; i++) {
        ans += vec[i].second;

        if (i == 0) {
            continue;
        }

        if (vec[i].first > max_ai_plus_ci) {
            ans += vec[i].first - max_ai_plus_ci;
        }

        max_ai_plus_ci = max(max_ai_plus_ci, vec[i].first + vec[i].second);
    }

    cout << ans << endl;
}