#include <bits/stdc++.h>
using namespace std;

bool isComposite(int num) {
    if (num <= 3) return false;

    for (int i = 2; i <= num; i++) {
        if (num != i and num%i == 0) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n-2; i++) {
        if (isComposite(i) and isComposite(n-i)) {
            cout << i << " " << n-i << endl;
            break;
        }
    }
}