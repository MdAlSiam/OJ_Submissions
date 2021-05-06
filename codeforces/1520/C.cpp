#include <bits/stdc++.h>
using namespace std;

int main() {
    int nTest;
    cin >> nTest;

    while (nTest--) {
        int n;
        cin >> n;

        int toPlace = 1;
        int ansGrid[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ansGrid[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (ansGrid[i][j] == 0) {
                    ansGrid[i][j] = toPlace;
                    toPlace++;
                    if (i-1 >= 0) ansGrid[i-1][j] = -1;
                    if (i+1 < n) ansGrid[i+1][j] = -1;
                    if (j-1 >= 0) ansGrid[i][j-1] = -1;
                    if (j+1 < n) ansGrid[i][j+1] = -1;
                }
            }
        }

        int negetiveOne = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (ansGrid[i][j] == -1) {
                    if (i-1 >= 0 and (ansGrid[i-1][j] == toPlace+1 or ansGrid[i-1][j] == toPlace-1)) {
                        negetiveOne = -1;
                    }
                    if (i+1 < n and (ansGrid[i+1][j] == toPlace+1 or ansGrid[i+1][j] == toPlace-1)) {
                        negetiveOne = -1;
                    }
                    if (j-1 >= 0 and (ansGrid[i][j-1] == toPlace+1 or ansGrid[i][j-1] == toPlace-1)) {
                        negetiveOne = -1;
                    }
                    if (j+1 < n and (ansGrid[i][j+1] == toPlace+1 or ansGrid[i][j+1] == toPlace-1)) {
                        negetiveOne = -1;
                    }

                    ansGrid[i][j] = toPlace;
                    toPlace++;
                }
            }
        }

        if (negetiveOne == -1) {
            cout << negetiveOne << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << ansGrid[i][j] << " ";
            }
            cout << endl;
        }
    }
}