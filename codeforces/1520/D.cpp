#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main() {
    int nTest;
    cin >> nTest;

    while (nTest--) {
        int n;
        cin >> n;
        int ara[n];

        map<int, int> counter;
        counter.clear();

        for (int i = 0; i < n; i++) {
            cin >> ara[i];
            ara[i] -= i;
            counter[ara[i]]++;
        }

        int ways = 0;

        for (map<int, int>::iterator it = counter.begin(); it != counter.end(); it++) {
            ways += (((*it).second)*(((*it).second)-1))/2;
        }

        cout << ways << endl;
    }
}