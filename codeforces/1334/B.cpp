#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
    int test;
    cin >> test;

    while(test--){
        int n, x;
        cin >> n >> x;
        int ara[n];
        for(int i = 0; i < n; i++)
            cin >> ara[i];

        sort(ara, ara+n);

        int crook = 0, ans = 0;
        for(int i = n-1; i >= 0; i--){
            if(ara[i] >= x){
                ans++;
                crook += (ara[i] - x);
            }
            else{
                int req = x - ara[i];
                if(crook >= req){
                    ans++;
                    crook -= req;
                }
            }
        }

        cout << ans << endl;
    }
}
