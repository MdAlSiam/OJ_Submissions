#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int ara[n+1];
    for(int i = 0; i < n; i++)
        cin >> ara[i];

    sort(ara, ara+n);

    int lo, hi;

    if(n & 1){
        lo = hi = n/2;
        cout << ara[lo] << " ";
        lo--;
        hi++;
        while(lo >= 0){
            cout << ara[lo] << " " << ara[hi] << " ";
            lo--;
            hi++;
        }
    }
    else{
        lo = n/2 - 1;
        hi = lo+1;
        while(lo >= 0){
            cout << ara[lo] << " " << ara[hi] << " ";
            lo--;
            hi++;
        }
    }
}

int main(){
    int test;
    cin >> test;
    while(test--)
        solve();
}
