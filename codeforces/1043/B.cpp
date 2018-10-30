#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int ara[n+4], diftab[n+4];
        ara[0] = 0;
        for(int i = 1; i <= n; i++){
            scanf("%d", &ara[i]);
            diftab[i-1] = ara[i] - ara[i-1];
        }
        int ansara[n+1], index = 0;
        for(int i = 1; i <= n; i++){
            bool paisi = true;
            for(int j = 0; j < n; j++){
                if(diftab[j] != diftab[j%i]){
                    paisi = false;
                    break;
                }
            }
            if(paisi) ansara[index++] = i;
        }
        printf("%d\n", index);
        for(int i = 0; index > i; i++)
            printf("%d ", ansara[i]);
        printf("\n");
    }
}