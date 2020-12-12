#include <bits/stdc++.h>
using namespace std;

int test;
int n, m;
string str[505];
int cumGrid[505][505];
int ans;
int currRo, currColBegin, currColEnd;
int astersikKount;
int roSegmentLen;

int main() {
    cin >> test;

    while (test--) {
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        //cout << "Got here" << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cumGrid[i][j] = 0;
            }
        }

        //cout << "Got here 2" << endl;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                //cumGrid[i][j] = 0;
                
                if (str[i][j] == '*') {
                    if (j == 0) {
                        cumGrid[i][j] = 1;
                    }
                    else {
                        cumGrid[i][j] += cumGrid[i][j-1] + 1;
                    }
                }
            }
        }

        //cout << "Got here 3" << endl;

        for (int i = 0; false and i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << cumGrid[i][j] << " ";
            }
            cout << endl;
        }

        ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (str[i][j] == '*') {
                    ans++;
                    currRo = i;
                    currColBegin = j;
                    currColEnd = j;
                    while (true) {
                        currRo++;
                        currColBegin--;
                        currColEnd++;

                        if (0 <= currRo and currRo < n \
                        and 0 <= currColBegin and currColEnd < m) {

                        }
                        else {
                            break;
                        }

                        astersikKount = \
                        cumGrid[currRo][currColEnd] - cumGrid[currRo][currColBegin];
                        if (cumGrid[currRo][currColBegin] > 0) astersikKount++; //?

                        roSegmentLen = currColEnd - currColBegin + 1;

                        if (astersikKount == roSegmentLen) {
                            ans++;
                        }
                        else {
                            break;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }
} 