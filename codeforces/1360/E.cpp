#include <bits/stdc++.h>
using namespace std;

char str[56][56];
int test;
int n;
bool no;

int main(){
    scanf("%d", &test);

    while(test--){
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
            scanf(" %s", str[i]);
        for(int i = 0; i < n; i++)
            str[i][n] = '1';
        for(int j = 0; j < n; j++)
            str[n][j] = '1';

        no = false;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(str[i][j] == '1'){
                    if(str[i][j+1] == '1');
                    else if(str[i+1][j] == '1');
                    else no = true;
                }
            }
        }

        if(no) printf("NO\n");
        else printf("YES\n");
    }
}
