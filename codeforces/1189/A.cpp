#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    scanf("%d", &n);

    char str[n+5];



    scanf("%s", &str);

    int fcs1[n+1], fcs0[n+1];
    int bcs1[n+1], bcs0[n+1];

    if(str[0] == '0') fcs0[0] = 1;
    else fcs0[0] = 0;

    if(str[0] == '1') fcs1[0] = 1;
    else fcs1[0] = 0;

    for(int i = 1; i < n; i++){
        if(str[i] == '1') fcs1[i] = fcs1[i-1] + 1;
        else fcs1[i] = fcs1[i-1];

        if(str[i] == '0') fcs0[i] = fcs0[i-1] + 1;
        else fcs0[i] = fcs0[i-1];
    }

    //b
    if(str[n-1] == '0') bcs0[n-1] = 1;
    else bcs0[n-1] = 0;

    if(str[n-1] == '1') bcs1[n-1] = 1;
    else bcs1[n-1] = 0;

    for(int i = n-2; i > -1; i--){
        if(str[i] == '1') bcs1[i] = bcs1[i+1] + 1;
        else bcs1[i] = bcs1[i+1];

        if(str[i] == '0') bcs0[i] = bcs0[i+1] + 1;
        else bcs0[i] = bcs0[i+1];
    }

    int shesh, shuru;
    shesh = shuru = -1;

    for(int i = 0; i < n-1; i++){
        if(fcs1[i] != fcs0[i] && bcs1[i+1] != bcs0[i+1]){
            shesh = i;
            shuru = i+1;
            break;
        }
    }

    if(shesh == -1 | fcs1[n-1] != fcs0[n-1]){
        printf("1\n");
        printf("%s\n", str);
        return 0;
    }

    printf("2\n");
    for(int i = 0; i <n; i++){
        printf("%c", str[i]);
        if(i == shesh) printf(" ");
    }
}

