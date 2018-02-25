#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, kount;
    while(scanf("%d", &n) == 1){
        kount = 1;
        int ara[n];
        for(int i = 0; i < n; i++) scanf("%d", &ara[i]);
        sort(ara, ara+n);
        if(ara[0] == 0) kount = 0;
        for(int i = 0; i < n; i++){
            if(ara[i] > ara[i-1]) kount++;
        }
        printf("%d\n", kount);
    }
    return 0;
}
