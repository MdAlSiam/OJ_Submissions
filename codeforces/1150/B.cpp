#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    getchar();

    char grid[1000][1000];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%c", &grid[i][j]);
        }
        getchar();
    }

//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            printf("%c", grid[i][j]);
//        }
//        printf("\n");
//    }

    for(int i = 0; i <= n-3; i++){
        for(int j = 1; j <= n-2; j++){
            //cout << "Grid[" << i << "][" << j << "]\n";
            bool ekhanebosbe = true;
            if(grid[i][j] == '.'){
                if(grid[i+1][j] == '#') ekhanebosbe = false;
                if(grid[i+2][j] == '#') ekhanebosbe = false;
                if(grid[i+1][j-1] == '#') ekhanebosbe = false;
                if(grid[i+1][j+1] == '#') ekhanebosbe = false;
            }
            else continue;
            if(ekhanebosbe){
                //cout << "Holo\n";
                grid[i][j] = '#';
                grid[i+1][j] = '#';
                grid[i+2][j] = '#';
                grid[i+1][j-1] = '#';
                grid[i+1][j+1] = '#';
            }
        }
    }

//    cout << "Resultant: " << endl;
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            printf("%c", grid[i][j]);
//        }
//        printf("\n");
//    }

    bool possible = true;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == '.'){
                possible = false;
                break;
            }
        }
    }

    if(possible) printf("YES\n");
    else printf("NO\n");
}
