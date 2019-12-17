#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    while(n--){
        char str[110];
        scanf(" %s", str);

        int len = strlen(str);

        int ds = 0;
        int kount[10];
        for(int i = 0; i < 10; i++) kount[i] = 0;

        for(int i = 0; i < len; i++){
            ds += str[i] - '0';
            kount[ str[i] - '0' ]++;
        }

        if( (ds%3 == 0) && ( kount[0] >= 1 && ( kount[2] >= 1 || kount[4] >= 1 || kount[6] >= 1 || kount[8] >= 1 || kount[0] >= 2) ) )
            printf("red\n");
        else printf("cyan\n");
    }
}
