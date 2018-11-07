#include <bits/stdc++.h>
using namespace std;

#define inf 1 << 28

int main(){
    int n, m;

    while(scanf("%d %d", &n, &m) == 2){

        ///Input
        char grid[n+1][m+1];
        for(int i = 0; i < n; i++){
            /*for(int j = 1; j <= m; j++){
                scanf("%c", &grid[i][j]);
            }*/
            scanf("%s", grid[i]);
            getchar();
        }

        ///Check Input
        /*
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%c ", grid[i][j]);
            }
            printf("\n");
        }
        */

        ///Traverse & Mark

        int gridmark[n+1][m+1];
        memset(gridmark, 0, sizeof gridmark);

        int xpos[n*m], ypos[n*m], lenset[n*m], index = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                if(grid[i][j] != '*') continue;

                int raylen = inf, kount;

                ///Leftcheck
                kount = 0;
                for(int k = j-1; k >= 0; k--){
                    if(grid[i][k] != '*') break;
                    kount++;
                }
                raylen = min(raylen, kount);

                ///Rightcheck
                kount = 0;
                for(int k = j+1; k < m; k++){
                    if(grid[i][k] != '*') break;
                    kount++;
                }
                raylen = min(raylen, kount);

                ///Topcheck
                kount = 0;
                for(int k = i-1; k >= 0; k--){
                    if(grid[k][j] != '*') break;
                    kount++;
                }
                raylen = min(raylen, kount);

                ///Bottomcheck
                kount = 0;
                for(int k = i+1; k < n; k++){
                    if(grid[k][j] != '*') break;
                    kount++;
                }
                raylen = min(raylen, kount);

                //cout << "Pos: " << i << " " << j << " ";
                //cout << "Raylen = " << raylen << endl;

                if(raylen > 0){
                    xpos[index] = i+1;
                    ypos[index] = j+1;
                    lenset[index] = raylen;
                    index++;

                    gridmark[i][j] = 1;
                    ///Letfmark
                    for(int k = j-1, kk = 0; kk < raylen; k--, kk++){
                        gridmark[i][k] = 1;
                    }

                    ///Rightmark
                    for(int k = j+1, kk = 0; kk < raylen; k++, kk++){
                        gridmark[i][k] = 1;
                    }

                    ///Topmark
                    for(int k = i-1, kk = 0; kk < raylen; k--, kk++){
                        gridmark[k][j] = 1;
                    }

                    ///Bottomfmark
                    for(int k = i+1, kk = 0; kk < raylen; k++, kk++){
                        gridmark[k][j] = 1;
                    }
                }
            }
        }

        ///Check for no solution
        bool np = false; // alldot = true;
        for(int i = 0; i < n; i++){
           for(int j = 0; j < m; j++){
                //if(grid[i][j] == '*') alldot = false;
                if(grid[i][j] == '*' && gridmark[i][j] == 0){np = true; break;}
           }
        }

        ///Output

        if(np) printf("-1\n");
        else{
            printf("%d\n", index);
            for(int i = 0; i < index; i++){
                printf("%d %d %d\n", xpos[i], ypos[i], lenset[i]);
            }
        }
    }///EOC
}
