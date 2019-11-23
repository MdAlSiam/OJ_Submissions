#include <bits/stdc++.h>
using namespace std;

int n;
int a[100005][4];
//int indexes[100005][5];
int kount[100005];
vector<int> indexes[100005];
int b[100005][4];

int main(){

    scanf("%d", &n);
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            kount[a[i][j]]++;
            indexes[a[i][j]].push_back(i);
        }
    }

    int first, second, third;
    first = second = third = 0;
    for(int i = 0; i < n-2; i++){
        for(int j = 0; j < 3; j++){
            if(kount[ a[i][j] ] == 1) first = a[i][j];
            if(kount[ a[i][j] ] == 2) second = a[i][j];
            if(kount[ a[i][j] ] == 3) third = a[i][j];
        }
        if(first && second  && third ) break;
        first = second = third = 0;
    }

    b[0][0] = first, b[0][1] = second, b[0][2] = third;
    //cout << "TEST: " << b[0][0] << " " << b[0][1] << " " << b[0][2] << endl;

    for(int i = 1; i < n-2; i++){
        second = b[i-1][1], third = b[i-1][2];
        vector <int> commonros;
        for(int ii = 0; ii < indexes[second].size(); ii++){
            for(int jj = 0; jj < indexes[third].size(); jj++){
                if(indexes[second][ii] == indexes[third][jj])
                    commonros.push_back(indexes[second][ii]);
            }
        }
        vector <int> suspects;
        for(int ii = 0; ii < commonros.size(); ii++){
            for(int jj = 0; jj < 3; jj++){
                suspects.push_back(a[commonros[ii]][jj]);
            }
        }
        int criminal;
        for(int ii = 0; ii < suspects.size(); ii++){
            if(suspects[ii] != b[i-1][0]
               && suspects[ii] != b[i-1][1]
               && suspects[ii] != b[i-1][2]){
                    criminal = suspects[ii];
                    break;
               }
        }
        b[i][0] = b[i-1][1];
        b[i][1] = b[i-1][2];
        b[i][2] = criminal;
    }

    cout << b[0][0] << " " << b[0][1];
    for(int i = 0; i < n-2; i++) cout << " " << b[i][2];
    cout << endl;
}
