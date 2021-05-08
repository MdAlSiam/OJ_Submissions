#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> k >> n;

    map<string, string> mp;

    while (n-- ){
        string str1, str2;
        cin >> str1 >> str2;

        if (str1.length() <= str2.length()) {
            mp[str1] = str1;
            mp[str2] = str1;
        }
        else {
            mp[str1] = str2;
            mp[str2] = str2;
        }
    }

    while (k--) {
        string str;
        cin >> str;
        cout << mp[str] << " ";
    }

    cout << endl;
}