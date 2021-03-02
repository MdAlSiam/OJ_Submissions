#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        map<int, int> csPos;
        csPos.clear();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            sum += temp;
            csPos[sum] = i;
        }

        int minOps = 100000;

        for (int i = 1; i <= sum; i++) {
            int opsHere = 0;
            int lastCountered = -1;
            int minOpsHere = 100000;

            for (int j = 1; i*j <= sum; j++) {
                if (csPos.count(i*j)) {
                    opsHere += csPos[i*j] - lastCountered - 1;
                    lastCountered = csPos[i*j];
                    if (i*j == sum) {
                        minOpsHere = opsHere;
                        break;
                    }
                }
                else break;
            }

            minOps = min(minOps, minOpsHere);
        }

        cout << minOps << endl;
    }
}