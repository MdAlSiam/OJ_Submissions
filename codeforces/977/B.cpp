#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        char input[n+2];
        scanf("%s", input);
        int len = strlen(input);

        int ansindex, anskount = -5;

        for(int i = 0; i < len-1; i++){
            char curr_1 = input[i];
            char curr_2 = input[i+1];
            //if(curr_1 > curr_2) continue;
            int kount = 0;
            for(int j = 0; j < len-1; j++){
                if(input[j] == curr_1 && input[j+1] == curr_2) kount++;
            }
            if(kount > anskount){
                anskount = kount;
                ansindex = i;
            }
        }
        printf("%c%c\n", input[ansindex], input[ansindex+1]);
    }
}
