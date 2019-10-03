#include <bits/stdc++.h>
using namespace std;


int main(){
    int q;
    scanf("%d", &q);

    while(q--){

        int n;
        scanf("%d", &n);


        char grid[3][200005];

        //for(int i = 1; i <= n; i++)
        scanf(" %s", grid[1]+1);
        //for(int i = 1; i <= n; i++)
        scanf(" %s", grid[2]+1);

        //printf("Inputted: %s %s\n", grid[1]+1, grid[2]+1);

        int x, y;

        x = y = 1;

        bool yes = false;

        //int kount = 0;

        while(1){

            //cout << "In loop: " << x << " " << y << endl;
            //printf("In loop: %c\n", grid[x][y]);
            //kount++;

            //if(kount == 20) break;

            if(y == n+1){
                if(x == 2){
                    yes = true;
                }
                break;
            }

            if(grid[x][y] == '2' || grid[x][y] == '1'){
                //cout << "At 1" << endl;
                //printf("%c\n", grid[x][y]);
                y++;
            }
            else{
                if(x == 1){
                    //cout << "At 2" << endl;
                    //printf("%c\n", grid[x][y]);
                    if(grid[x+1][y] <= '2') break;
                    else x++, y++;
                }
                else if(x == 2){
                    //cout << "At 3" << endl;
                    //printf("%c\n", grid[x][y]);
                    if(grid[x-1][y] <= '2') break;
                    else x--, y++;
                }
            }
        }///while ends

        if(yes) printf("YES\n");
        else printf("NO\n");

    }///test ends
}
