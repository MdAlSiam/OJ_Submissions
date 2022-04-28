#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Inclusion Exclusion Principle
// Problem Link: https://atcoder.jp/contests/abc206/tasks/abc206_e?lang=en
// Given integers L and L,R (L≤R), find the number of pairs (x,y) of integers 
// satisfying all of the conditions below:
// i) L≤x,y≤R
// ii) g != 1
// iii) x/g != 1 and y/g != 1

ll l, r;
vector<ll> primeFactors[1000006];
bool check[1000006];
ll nMultiples;
ll currNumber;

void calc(ll pos, bool odd, ll m) {
    if (pos == primeFactors[currNumber].size()) {
        if (m == 1) return;
        if (odd) nMultiples += (currNumber-1)/m-(l-1)/m;
        else nMultiples -= (currNumber-1)/m-(l-1)/m;
        return;
    }

    calc(pos+1, odd, m);
    calc(pos+1, odd^1, m*primeFactors[currNumber][pos]);
}

int main() {
    cin >> l >> r;

    if (r == 1) {
        cout << "0" << endl;
        return 0;
    }

    l = max(2LL, l);

    // initially all of the pairs in the range are valid
    ll len = (r-l+1);
    ll ans = (len*(len-1))/2;

    // the pairs (a, b) in which b%a==0 will be invalid, here gcd will be a (Here, b < a)
    for (ll i = l; i <= r; i++) {
        for (ll j = i+i; j <= r; j += i) {
            ans--;
        }
    }

    // the pairs (a, b) where a and b are co-prime (no common factor) will be invalid
    // so let's find out the valid pairs where a has at least one prime factor of b
    
    // find all the prime factors at first
    for (ll i = 2; i <= 1000006; i++) {
        if (not check[i]) {
            for (ll j = i; j <= r; j += i) {
                check[j] = true;
                primeFactors[j].push_back(i);
            }
        }
    }

    // now find the count of valid pairs (a, b) for all b
    for (ll i = l; i <= r; i++) {
        nMultiples = 0;
        currNumber = i;

        calc(0, 0, 1);

        ans -= ((i-l)-nMultiples);
    }

    cout << 2*ans << endl;

}