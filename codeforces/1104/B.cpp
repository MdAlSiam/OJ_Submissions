#include <bits/stdc++.h>
using namespace std;

int main(){
//while(1){
    char x[111111];
    scanf("%s", &x);

    stack <char> turns;
    int kount = 0;

    int len = strlen(x);

    for(int i = 0; i < len; i++){
        if(turns.empty()) turns.push(x[i]);
        else if(turns.top() == x[i]){kount++; turns.pop();}
        else turns.push(x[i]);
    }

    if(kount & 1) printf("Yes\n");
    else printf("No\n");
//}
}
