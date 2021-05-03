#include <bits/stdc++.h>
using namespace std;

int main() {
    int nOriginalReq, nCopyReq;
    cin >> nCopyReq >> nOriginalReq;

    int copyMade = nOriginalReq-1;

    if (nOriginalReq == 0) {
        cout << "NO" << endl;
        return 0;
    }

    if (nOriginalReq == 1) {
        if (nCopyReq == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
        return 0;
    }

    if (nCopyReq < copyMade) {
        cout << "No" << endl;
        return 0;
    }

    int moreRequired = nCopyReq-copyMade;

    if (moreRequired%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}