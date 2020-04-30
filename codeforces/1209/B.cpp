#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    char mat[130][n+3];
    scanf(" %s", &mat[0]);


    int start[n], duration[n], k;
    for(int i = 0; i < n; i++)
        scanf("%d %d", &duration[i], &start[i]);

    for(int col = 0; col < n; col++){
        k = duration[col];
        for(int ro = 1; ro < 130; ro++){
            if(ro < start[col]){
                mat[ro][col] = mat[ro-1][col];;
                continue;
            }

            if(k == duration[col]){
                mat[ro-1][col] == '0' ? mat[ro][col] = '1' : mat[ro][col] = '0';
                k = 1;
            }
            else{
                mat[ro][col] = mat[ro-1][col];
                k++;
            }
        }
    }

    int ans = -1;
    for(int ro = 0; ro < 130; ro++){
        int now = 0;
        //if(ro < 11) printf("->%s\n", mat[ro]);
        for(int col = 0; col < n; col++)
            if(mat[ro][col] == '1') now++;
        ans = max(ans, now);
    }

    printf("%d\n", ans);
}
