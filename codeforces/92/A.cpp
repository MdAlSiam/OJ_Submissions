#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int sum = ((n+1)*n)/2;

    int rem = k % sum;

    int ans = 0;

    for(int i = 1; i <= n; i++){
        int sumtillnow = (i*i + i) / 2;
        if(rem <  sumtillnow){
            ans = rem - sumtillnow + i;
            //cout << rem << " " << sumtillnow << " " << i << endl;
            break;
        }
    }

    cout << ans << endl;
}
