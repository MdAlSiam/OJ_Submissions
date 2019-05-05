#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    scanf("%d %d", &n, &m);

    int a[n+3][m+3];
    int b[n+3][m+3];

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            scanf("%d", &b[i][j]);

    int possible = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int temp1 = min(a[i][j], b[i][j]);
            int temp2 = max(a[i][j], b[i][j]);
            a[i][j] = temp1;
            b[i][j] = temp2;
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i][j] <= a[i-1][j]
               || a[i][j] <= a[i][j-1]
               || b[i][j] <= b[i-1][j]
               || b[i][j] <= b[i][j-1]){
                    possible = 0;
                    break;
               }
        }
        if(possible == 0) break;
    }

    if(possible) printf("Possible\n");
    else printf("Impossible\n");
}
