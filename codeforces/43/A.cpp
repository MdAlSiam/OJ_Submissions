#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    map<string, int>::iterator it;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;

        mp[team]++;
    }

    string team1, team2;
    int nGoals1 = 0, nGoals2 = 0;

    for (it = mp.begin(); it != mp.end(); it++) {
        if (it == mp.begin()) {
            team1 = it->first;
            nGoals1 = it->second;
        }
        else {
            team2 = it->first;
            nGoals2 = it->second;
        }
    }    

    nGoals1 > nGoals2 ? cout << team1 : cout << team2;
    cout << endl;
} 