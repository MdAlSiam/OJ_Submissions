#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    while(scanf("%lld", &n) == 1){
        long long int given[n+1];
        long long int shesh[n+1];
        for(long long int i = 0; i < n; i++) scanf("%lld", given+i);

        long long int shirikount = 1, shesherindex = 0;

        for(long long int i = 1; i <= n; i++){
            if(i == n) shesh[shesherindex] = given[i-1];
            else if(given[i] == 1){
                shirikount++;
                shesh[shesherindex++] = given[i-1];
            }
        }

        printf("%lld\n", shirikount);
        for(long long int k = 0; k <= shesherindex; k++) printf("%lld ", shesh[k]);
        printf("\n");
    }
    return 0;
}
