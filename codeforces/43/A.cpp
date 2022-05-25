#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string team1, team2;

    int nGoals1 = 1, nGoals2 = 0;

    cin >> team1;

    for (int i = 1; i < n; i++) {
        string team;
        cin >> team;

        if (team == team1) {
            nGoals1++;
        }
        else {
            team2 = team;
            nGoals2++;
        }
    }

    // cout << nGoals1 << " YOYO " << nGoals2 << endl;

    nGoals1 >= nGoals2 ? cout << team1 << endl : cout << team2 << endl;
} 