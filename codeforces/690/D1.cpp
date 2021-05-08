#include <bits/stdc++.h>
using namespace std;

int main() {
    int nRows, nCols;
    cin >> nRows >> nCols;

    char wall[nRows+10][nCols+10];

    for (int i = 0; i < nRows; i++) {
        scanf(" %s", wall[i]);
        wall[i][nCols] = '.';
    }

    int nSegments = 0;

    for (int i = nRows-1; i < nRows; i++) {
        for (int j = 1; j <= nCols; j++) {
            if (wall[i][j] != wall[i][j-1] and wall[i][j] == '.') {
                nSegments++;
            }
        }
    }

    cout << nSegments << endl;
}