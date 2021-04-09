#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > evenSumCells, oddSumCells;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i+j)%2) {
                oddSumCells.push_back({i, j});
            }
            else {
                evenSumCells.push_back({i, j});
            }
        }
    }

    int x;

    while (evenSumCells.size() and oddSumCells.size()) {
        cin >> x;
        if (x == 1) {
            cout << "2 " << oddSumCells.back().first << " " << oddSumCells.back().second << endl;
            cout.flush();
            oddSumCells.pop_back();
        }
        else {
            cout << "1 " << evenSumCells.back().first << " " << evenSumCells.back().second << endl;
            cout.flush();
            evenSumCells.pop_back();
        }
    }

    while (evenSumCells.size()) {
        cin >> x;
        if (x == 1) {
            cout << "3 " << evenSumCells.back().first << " " << evenSumCells.back().second << endl;
            cout.flush();
            evenSumCells.pop_back();
        }
        else {
            cout << "1 " << evenSumCells.back().first << " " << evenSumCells.back().second << endl;
            cout.flush();
            evenSumCells.pop_back();
        }
    }

    while (oddSumCells.size()) {
        cin >> x;
        if (x == 2) {
            cout << "3 " << oddSumCells.back().first << " " << oddSumCells.back().second << endl;
            cout.flush();
            oddSumCells.pop_back();
        }
        else {
            cout << "2 " << oddSumCells.back().first << " " << oddSumCells.back().second << endl;
            cout.flush();
            oddSumCells.pop_back();
        }
    }
}