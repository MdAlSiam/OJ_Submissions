#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    scanf("%d", &q);

    while(q--){
        string x;
        cin >> x;
        int len = x.length();
        bool palin = true;

        for(int i = 0, j = len-1; i < j; i++, j--){
            if(x[i] != x[j]){
                palin = false;
                break;
            }
        }

        if(!palin){
            cout << x << endl;
            continue;
        }

        if(len == 2 && x[0] == x[1]){
            cout << -1 << endl;
            continue;
        }

        if(len == 2 && x[0] != x[1]){
            cout << x << endl;
            continue;
        }

        char ff = x[0];

        bool possible = false;

        for(int i = 1; i < len; i++){
            if(x[i] != ff){
                swap(x[i], x[0]);
                possible = true;
                break;
            }
        }

        if(possible) cout << x << endl;
        else cout << "-1" << endl;
    }
}
