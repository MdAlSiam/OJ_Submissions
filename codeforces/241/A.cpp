#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int distances[n];
    int supplies[n];
    int maxSupplySoFar[n];
    for (int i = 0; i < n; i++) {
        cin >> distances[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> supplies[i];
        if (i == 0) maxSupplySoFar[i] = supplies[i];
        else if (maxSupplySoFar[i-1] > supplies[i]) maxSupplySoFar[i] = maxSupplySoFar[i-1];
        else maxSupplySoFar[i] = supplies[i];
    }

    int balance = 0;
    int timeElapsed = 0;

    for (int i = 0; i < n; i++) {
        balance += supplies[i];
        if (balance < distances[i]) {
            int balanceRequired = distances[i]-balance;
            int packRequired = (balanceRequired+maxSupplySoFar[i]-1)/maxSupplySoFar[i];
            balance += packRequired*maxSupplySoFar[i];
            timeElapsed += packRequired*k;
        }
        balance -= distances[i];
        timeElapsed += distances[i];
    }

    cout << timeElapsed << endl;
}