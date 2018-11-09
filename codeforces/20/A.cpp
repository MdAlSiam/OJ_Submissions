#include <bits/stdc++.h>
using namespace std;

int main(){
    //usr///local//nginx/sbin///
    char x[110];

    scanf("%s", &x);

    int len = strlen(x);

    for(int i = 0; i < len-1; i++){
        if(x[i] == '/' && x[i+1] == '/') x[i+1] = 'U';
        if(x[i] == 'U' && x[i+1] == '/') x[i+1] = 'U';
    }

    for(int i = len-1; i > 0; i--){
        if(x[i] == '/') x[i] = 'U';
        else if(x[i] == 'U') {}
        else break;
    }

    for(int i = 0; i < len; i++)
        if(x[i] != 'U') printf("%c", x[i]);
    printf("\n");
}
