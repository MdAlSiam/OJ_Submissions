#include <bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main() {
    int n, r;
    cin >> n >> r;

    cout << setprecision(11) << (r*1.00*sin(pi/n))/(1-sin(pi/n)) << endl;
}