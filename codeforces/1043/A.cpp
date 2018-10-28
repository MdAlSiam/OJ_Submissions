#include <bits/stdc++.h>
using namespace std;
#define inf 1 << 28

int main(){
    int n;
    scanf("%d", &n);
    int ara[n+2];
    int maxi = -inf, sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", ara+i);
        maxi = max(maxi, ara[i]);
        sum += ara[i];
    }

    //cout << "sum = " << sum << endl;
     //cout << "max = " << maxi << endl;

    for(int xx = maxi; ; xx++){
        if((xx*n - sum) > sum){
            cout << xx << endl;
            break;
        }
    }
}
