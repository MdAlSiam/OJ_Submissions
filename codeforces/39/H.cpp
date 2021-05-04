#include <bits/stdc++.h>
using namespace std;

bool allDigitsOk(int num, int base) {
    while (num > 0) {
        int digit = num % 10;
        if (digit >= base) return false;
        num /= 10;
    }

    return true;
}

int findCorrespondingValue(int base, int firstCandidate) {
    int candidate = firstCandidate;
    while (true) {
        if (allDigitsOk(candidate, base)) return candidate;
        candidate++;
    }
}

int main() {
    int n;
    cin >> n;

    int firstUsable = 1;

    int valueInNewSystem[85];

    for (int i = 1; i < 85; i++) {
        valueInNewSystem[i] = findCorrespondingValue(n, firstUsable);
        firstUsable = valueInNewSystem[i]+1;
    }

    // TODO, print the grid
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            cout << valueInNewSystem[i*j] << " ";
        }
        cout << endl;
    }
}