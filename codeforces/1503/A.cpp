#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        string ref;
        cin >> ref;

        string ans1 = "";
        string ans2 = "";

        int bitKount[2];
        bitKount[0] = bitKount[1] = 0;

        for (int i = 0; i < ref.length(); i++) {
            bitKount[ref[i]-'0']++;
        }

        if ((bitKount[0]%2) or (bitKount[1]%2) or (ref[0]=='0') or (ref[n-1]=='0')) {
            printf("NO\n");
            continue;
        }

        bool fwd = true;
        int oneGot = 0;

        for (int i = 0; i < ref.length(); i++) {
            if (ref[i] == '1') {
                if (oneGot < bitKount[1]/2) {
                    ans1 += '(';
                    ans2 += '(';
                }
                else {
                    ans1 += ')';
                    ans2 += ')';
                }

                oneGot++;
            }
            else {
                if (fwd) {
                    ans1 += '(';
                    ans2 += ')';
                }
                else {
                    ans1 += ')';
                    ans2 += '(';
                }
                fwd = not fwd;
            }
        }

        printf("YES\n");
        cout << ans1 << endl << ans2 << endl;
    }
}