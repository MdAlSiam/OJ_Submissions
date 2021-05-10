#include <bits/stdc++.h>
using namespace std;

int main() {
    int nTest;
    cin >> nTest;

    while (nTest--) {
        int nPages, initPos, finPos, skipRate;
        cin >> nPages >> initPos >> finPos >> skipRate;

        int movesToReachFirstPos = (initPos-1+skipRate-1)/skipRate;
        int movesToReachLastPos = (nPages-initPos+skipRate-1)/skipRate;

        // cout << "to 1: "  << movesToReachFirstPos << endl;
        // cout << "to last: "  << movesToReachLastPos << endl; 

        int ans = -1;

        if ((finPos-1)%skipRate == 0 and (nPages-finPos)%skipRate == 0) {
            int ans1 = movesToReachFirstPos+(finPos-1)/skipRate;
            int ans2 = movesToReachLastPos+(nPages-finPos)/skipRate;
            ans = min(ans1, ans2);
            // cout << "Case 1" << ans1 << " " << ans2 << endl;
        }
        else if ((finPos-1)%skipRate == 0) {
            ans = movesToReachFirstPos+(finPos-1)/skipRate;
            // cout << "Case 2" << endl;
        }
        else if ((nPages-finPos)%skipRate == 0) {
            ans = movesToReachLastPos+(nPages-finPos)/skipRate;
            // cout << "Case 3" << endl;
        }

        if ((abs(initPos-finPos))%skipRate == 0) {
            if (ans == -1) ans = 1<<30;
            ans = min(ans, (abs(initPos-finPos))/skipRate);
            // cout << "Case 4" << endl;
        }

        cout << ans << endl;
    } 
}