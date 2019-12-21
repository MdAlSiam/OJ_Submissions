#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a, b;
        scanf("%d %d", &a, &b);
        for(int i = 0; ; i++){
            int total = (i*i + i) / 2;
            total += a + b;
            if(total%2 == 0 && total/2 >= a && total/2 >= b){
                printf("%d\n", i);
                break;
            }
        }
    }
}
