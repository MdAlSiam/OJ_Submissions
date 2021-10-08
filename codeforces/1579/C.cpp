#include <bits/stdc++.h>
using namespace std;

bool solveCase() {
    int n, m, k;
    cin >> n >> m >> k;

    string grid[n];
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    int cumDown[n][m];

    for (int i = 0; i < n; i++) {
        int ro = i;
        int col = 0;

        if (grid[ro][col] == '*') cumDown[ro][col] = 1;
        else cumDown[ro][col] = 0;

        ro++;
        col++;

        while (true) {
            if (ro < n and col < m) {
                if (grid[ro][col] == '*') cumDown[ro][col] =  cumDown[ro-1][col-1]+1;
                else cumDown[ro][col] = 0;

                ro++;
                col++;
            }
            else {
                break;
            }
        }
    }

    for (int j = 1; j < m; j++) {
        int ro = 0;
        int col = j;

        if (grid[ro][col] == '*') cumDown[ro][col] = 1;
        else cumDown[ro][col] = 0;

        ro++;
        col++;

        while (true) {
            if (ro < n and col < m) {
                if (grid[ro][col] == '*') cumDown[ro][col] =  cumDown[ro-1][col-1]+1;
                else cumDown[ro][col] = 0;

                ro++;
                col++;
            }
            else {
                break;
            }
        }
    }

    // -------------------------------------------------------------------------------------------------
    // -------------------------------------------------------------------------------------------------

    int cumRight[n][m];

    for (int i = 1; i < n; i++) {
        int ro = i;
        int col = m-1;

        if (grid[ro][col] == '*') cumRight[ro][col] = 1;
        else cumRight[ro][col] = 0;

        ro++;
        col--;

        while (true) {
            if (ro < n and col < m and ro >= 0 and col >= 0) {
                if (grid[ro][col] == '*') cumRight[ro][col] =  cumRight[ro-1][col+1]+1;
                else cumRight[ro][col] = 0;

                ro++;
                col--;
            }
            else {
                break;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        int ro = 0;
        int col = j;

        if (grid[ro][col] == '*') cumRight[ro][col] = 1;
        else cumRight[ro][col] = 0;

        ro++;
        col--;

        while (true) {
            if (ro < n and col < m and ro >= 0 and col >= 0) {
                if (grid[ro][col] == '*') cumRight[ro][col] =  cumRight[ro-1][col+1]+1;
                else cumRight[ro][col] = 0;

                ro++;
                col--;
            }
            else {
                break;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int minRadHere = min(cumDown[i][j]-1, cumRight[i][j]-1);

            if (minRadHere >= k) {
                int curr_x1 = i;
                int curr_y1 = j;
                int curr_x2 = i;
                int curr_y2 = j;

                grid[curr_x1][curr_y1] = '#';

                curr_x1--;
                curr_y1--;
                curr_x2--;
                curr_y2++;

                for (int k = 0; k < minRadHere; k++) {
                    grid[curr_x1][curr_y1] = '#';
                    grid[curr_x2][curr_y2] = '#';

                    curr_x1--;
                    curr_y1--;
                    curr_x2--;
                    curr_y2++;
                }
            }
        }
    }

    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d |", cumDown[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d__", cumRight[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) cout << grid[i] << endl;
    */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '*') return false;
        }
    }

    return true;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        if (solveCase()) printf("YES\n");
        else printf("NO\n");
    }
}