#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int a, int b, int c) {
    return a+b>c and b+c>a and c+a>b;
}

bool isSegment(int a, int b, int c) {
    return a+b==c or b+c==a or c+a==b;
}

int main() {
    int lengths[4];
    for (int i = 0; i < 4; i++) cin >> lengths[i];

    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 4; j++) {
            for (int k = j+1; k < 4; k++) {
                if (isTriangle(lengths[i], lengths[j], lengths[k])) {
                    cout << "TRIANGLE" << endl;
                    return 0;
                }
            }
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = i+1; j < 4; j++) {
            for (int k = j+1; k < 4; k++) {
                if (isSegment(lengths[i], lengths[j], lengths[k])) {
                    cout << "SEGMENT" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
}