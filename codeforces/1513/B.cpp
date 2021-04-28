#include <bits/stdc++.h>
using namespace std;

#define int long long int 

#define mod 1000000007LL

int multiply(int num1, int num2) {
    return ((num1%mod)*(num2%mod))%mod;
}

int nC2 (int num) {
    return (num*(num-1))/2;
}

int factorial(int num) {
    int ret = 1;
    for (int i = 1; i <= num; i++) {
        ret = multiply(ret, i);
    }

    return ret;
}

void merge_sort(int* ara, int lo, int hi) {

    if (lo == hi) {
        return;
    }

    int mid = lo + ((hi - lo)/2);

    merge_sort(ara, lo, mid);
    merge_sort(ara, mid+1, hi);

    int i, j, k, kk, temp[hi-lo+1];

    for (i = lo, j = mid+1, k = 0, kk = lo; kk <= hi; k++, kk++) {
        if (i == mid+1) {
            temp[k] = ara[j];
            j++;
        }
        else if (j == hi+1) {
            temp[k] = ara[i];
            i++;
        }
        else if (ara[i] <= ara[j]) {
            temp[k] = ara[i];
            i++;
        }
        else {
            temp[k] = ara[j];
            j++;
        }
    }

    for (k = 0, kk = lo; kk <= hi; k++, kk++) {
        ara[kk] = temp[k];
    }
}

int32_t main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        int ara[n];
        for (int i = 0; i < n; i++) {
            cin >> ara[i];
        }

        merge_sort(ara, 0, n-1);

        // for (int i = 0; i < n; i++) printf(i == n-1 ? "%d\n":"%d ", ara[i]);

        if (ara[0] != ara[1]) {
            cout << "0" << endl;
            continue;
        }

        bool toContinue = false;
        
        for (int i = 2; i < n; i++) {
            int andVal = ara[i] & ara[1];
            if (andVal != ara[1]) {
                cout << 0 << endl;
                toContinue = true;
                break;
            }
        }

        if (toContinue) continue;

        int kount = 1;
        for (int i = 1; i < n; i++) {
            if (ara[i] == ara[0]) {
                kount++;
            }
        }

        // cout << 2*nC2(kount)*factorial(n-2) << endl;
        cout << multiply(2, multiply(nC2(kount), factorial(n-2))) << endl;
    }
    
}