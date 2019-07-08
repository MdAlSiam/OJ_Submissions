#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int ara[n+3];
    for(int i = 0; i < n; i++)
        scanf("%d", ara+i);

    sort(ara, ara+n);

    if(ara[n-2]+ara[n-3] <= ara[n-1]){
        printf("NO\n");
        return 0;
    }

    printf("YES\n");
    for(int i = 0; i < n-3; i++)
        printf("%d ", ara[i]);
    printf("%d %d %d\n", ara[n-2], ara[n-1], ara[n-3]);
}
