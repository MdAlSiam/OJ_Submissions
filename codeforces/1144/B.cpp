#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int oddara[n+3], evenara[n+3];
        int oddin = 0, evenin = 0;
        for(int i = 0; i < n; i++){
            int t;
            scanf("%d", &t);
            if(t & 1) oddara[oddin++] = t;
            else evenara[evenin++] = t;
        }
        sort(oddara, oddara+oddin);
        sort(evenara, evenara+evenin);

        int sum = 0;

        if(oddin > evenin){
            int limit = oddin - evenin - 1;
            for(int i = 0; i < limit && limit > 0; i++){
                sum += oddara[i];
            }

        }
        else{
            int limit = evenin - oddin - 1;
            for(int i = 0; i < limit && limit > 0; i++){
                sum += evenara[i];
            }
        }

        printf("%d\n", sum);
    }
}
