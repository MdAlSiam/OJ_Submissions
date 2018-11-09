#include <bits/stdc++.h>
using namespace std;

#define inf INT_MAX

int main(){
    int n, k;
    while(scanf("%d %d", &n, &k) == 2){
        int ara[n+3];
        for(int i = 1; i <= n; i++) scanf("%d", ara+i);
        sort(ara+1, ara+n+1);
        ara[n+1] = inf;
        //for(int i = 1; i <= n; i++) printf("%d ", ara[i]);
        //printf("\n");
        if(k == 0 && ara[1]-1 >= 1) printf("%d\n", ara[1]-1);
        else if(k == 0) printf("-1\n");
        else if(ara[k+1] - ara[k] >= 1) printf("%d\n", ara[k]);
        else printf("-1\n");
    }
}
