#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int charCount[26];
    for (int i = 0; i < 26; i++) {
        charCount[i] = 0;
    }

    for (int i = 0; i < str.length(); i++) {
        charCount[str[i]-'a']++;
    }

    int move = 0;

    while (true) {
        int oddKount = 0;
        int evenKount = 0;

        move++;

        for (int i = 0; i < 26; i++) {
            if (charCount[i] > 0 and charCount[i]%2 == 0) {
                evenKount++;
            }
            else if (charCount[i] > 0) {
                oddKount++;
            }
        }

        if (oddKount <= 1) {
            if (move & 1) cout << "First" << endl;
            else cout << "Second" << endl;
            return 0;
        }

        for (int i = 0; i < 26; i++) {
            if (charCount[i]) {
                charCount[i]--;
                break;
            }
        }
    }
}