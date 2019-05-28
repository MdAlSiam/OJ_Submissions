#include <bits/stdc++.h>
using namespace std;

int main(){
    //while(1){


    int up, m;
    scanf("%d %d", &up, &m);

    int a[m+5], b[m+5];
    for(int i = 0; i < m; i++){
        scanf("%d %d", a+i, b+i);
    }

    ///a0
    int x1 = a[0], y1, y2;
    bool firstseen = false;
    bool y1_nai = false, y2_nai = false;

    for(int i = 1; i < m; i++){
        if(a[i] == x1 || b[i] == x1)
            continue;
        else if(!firstseen){
            y1 = a[i];
            y2 = b[i];
            firstseen = true;
        }
        else{
            if(a[i] == y1 || b[i] == y1){}
            else {y1_nai = true;}// cout << "a0 y1_nai on i = " << i << endl;}
            if(a[i] == y2 || b[i] == y2){}
            else {y2_nai = true;}// cout << "a0 y2_nai on i = " << i << endl;}
        }
    }

    if(y1_nai == false || y2_nai == false){
        printf("Yes\n");
        return 0;
    }

    ///XXX
    ///a0

    x1 = b[0];
    firstseen = false;
    y1_nai = false; y2_nai = false;

    for(int i = 1; i < m; i++){
        if(a[i] == x1 || b[i] == x1)
            continue;
        else if(!firstseen){
            y1 = a[i];
            y2 = b[i];
            firstseen = true;
        }
        else{
            if(a[i] == y1 || b[i] == y1){}
            else {y1_nai = true;} //cout << "a1 y1_nai on i = " << i << endl;}
            if(a[i] == y2 || b[i] == y2){}
            else {y2_nai = true;}// cout << "a1 y2_nai on i = " << i << endl;}
        }
    }

    if(y1_nai == false || y2_nai == false){
        printf("Yes\n");
        return 0;
    }

    printf("No\n");
    return 0;

    //}
}
