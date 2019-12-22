#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    if(r == c && c == 1){
        printf("0\n");
        return 0;
    }
    if(r == 1 || c == 1){
        for(int i = 1; i <= r*c ; i++) printf("%d ", i+1);
        return 0;
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= c; j++){
            cout << i*(r+j) << " ";
        }
        cout << endl;
    }
}
