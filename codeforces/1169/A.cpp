#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, x, y;
    while(scanf("%d %d %d %d %d", &n, &a, &x, &b, &y) == 5){
        int yes = 0;
        for(int i = 1; ;i++){
            if(a == b){
                printf("YES\n");
                yes = 1;
                break;
            }

            if(a == x || b == y)
                break;

            a++;
            b--;

            if(a > n) a = 1;
            if(b < 1) b = n;
        }

        if(!yes){
            printf("NO\n");
        }
    }
}
