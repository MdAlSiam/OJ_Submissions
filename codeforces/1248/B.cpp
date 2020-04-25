#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){

    int n;
    scanf("%lld", &n);

    int len[n+10];
    for(int i = 1; i <= n; i++){
        scanf("%lld", len+i);
    }

    sort(len+1, len+n+1);

    int sum1 = 0, sum2 = 0;

    for(int i = 1; i <= n; i++){
        if(i <= n/2) sum1 += len[i];
        else sum2 += len[i];
    }

    cout << sum1*sum1 + sum2*sum2 << endl;
}
