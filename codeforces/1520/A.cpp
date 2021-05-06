#include <bits/stdc++.h>
using namespace std;

int main() {
    int nTest;
    cin >> nTest;

    while (nTest--) {
        int n;
        cin >> n;

        string str;
        cin >> str;

        int lastpos[26];
        for (int i = 0; i < 26; i++) {
            lastpos[i] = -1;
        }

        bool yes = true;

        for (int i = 0; i < n; i++) {
            if (lastpos[str[i]-'A'] == -1) lastpos[str[i]-'A'] = i;
            else if (i > 0 and lastpos[str[i]-'A'] == i-1) lastpos[str[i]-'A'] = i;
            else yes = false;
        }

        yes ? cout << "YES" << endl : cout << "NO" << endl;
    }
}