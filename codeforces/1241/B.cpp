#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        char a[110];
        char b[110];
        scanf(" %s %s", a, b);
        //printf(" %s %s", a, b);
        int len = strlen(a);

        bool hobe = false;

        for(int i = 0; i < len; i++){
            for(int j = 0; j < len; j++){
                if(a[i] == b[j]){
                    hobe = true;
                    break;
                }
            }
        }

        if(hobe) printf("YES\n");
        else printf("NO\n");
    }
}
