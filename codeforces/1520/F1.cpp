#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, _;
    cin >> n >> _;
    int k;
    cin >> k;

    cout << "? 1 " << n << endl;
    cout.flush();

    int nOnes;
    cin >> nOnes;
    int nZeros = n - nOnes;

    int lo = 1, hi = n;

    int nZerosBefore = 0;

    while (lo <= hi) {
        if (lo == hi) {
            cout << "! " << lo << endl;
            cout.flush();
            break;
        }

        int mid = lo+(hi-lo)/2;

        int nOnesInFirstHalf;
        cout << "? " << lo << " " << mid << endl;
        cout.flush();
        cin >> nOnesInFirstHalf;

        int nZerosInFirstHalf = (mid-lo+1) - nOnesInFirstHalf;

        if (nZerosInFirstHalf+nZerosBefore < k) {
            lo  = mid + 1;
            nZerosBefore += nZerosInFirstHalf;
        }
        else hi = mid;
    }
}