#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int ara[n+5];
        for(int i = 0; i < n; i++){
            scanf("%d", ara+i);
        }
        int kount = 0;
        for(int i = 0; i < n-2; i++){
            if(ara[i] == 1 && ara[i+1] == 0 && ara[i+2] == 1){ kount++;
            if(i > 1){
                int p1 = 0, p2 = 0;
                if(ara[i] == 1 && ara[i-1] == 0 && ara[i-2] == 1) p1++;
                if(ara[i+2] == 1 && ara[i+3] == 0 && ara[i+4] == 1) p2++;
                if(p1 == 1) ara[i] = 0;
                if(p2 == 1) ara[i+2] = 0;
                if(p1 && p2) kount++;
            }   else ara[i+2] = 0;
            }
        }
        /*for(int i = 0; i < n-2; i++){
            if(ara[i] == 1 && ara[i+1] = 0 && ara[i+2] == 1 &&) kount++;
        }*/
        printf("%d\n", kount);
    }
}
