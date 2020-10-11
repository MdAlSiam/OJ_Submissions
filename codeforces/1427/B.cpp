#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        int ans = 0;
        bool noDoblio = true;
        vector<int> vec;
        vec.clear();
        int prevPos = -1;
        for (int i = 0; i < n; i++) {
            if (str[i] == 'W') {
                int gapLen = i - prevPos - 1;
                if (gapLen != 0 and prevPos != -1) vec.push_back(gapLen);
                prevPos = i;
                noDoblio = false;
                if (i > 0 and str[i-1] == 'W') ans += 2;
                else ans++;
            }
        }

        if (noDoblio) {
            cout << max(0, (min(n, k))*2 - 1) << endl;
            continue;
        }

        sort(vec.begin(), vec.end());
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] <= k) {
                ans += 2*vec[i] + 1;
                k -= vec[i];
            }
            else {
                ans += 2*k;
                k -= k;
            }
        }

        if (k > 0) {
            int posAvailable = 0;
            for (int i = 0; i < n; i++) {
                if (str[i] == 'W') break;
                posAvailable++;
            }
            for (int i = n-1; i >= 0; i--) {
                if (str[i] == 'W') break;
                posAvailable++;
            }
            ans += 2*(min(k, posAvailable));
        }

        cout << ans << endl;
    }
}
