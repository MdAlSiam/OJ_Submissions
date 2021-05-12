#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int matchNo = 0;

    for (int skipRate = 2; skipRate <= n; skipRate *= 2) {
        matchNo++;
        if (skipRate == n) {
            cout << "Final!" << endl;
            break;
        }
        bool foundHere = false;
        for (int i = 1; i <= n; i += skipRate) {
            if (i <= a and a < i+skipRate and i <= b and b < i+skipRate) {
                cout << matchNo << endl;
                foundHere = true;
                break;
            }
        }
        if (foundHere) break;
    }
}