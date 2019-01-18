#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    while(scanf("%d %d %d", &n, &x, &y) == 3){
        int z = 0;
        for(int i = 0; i < n; i++){
            int t;
            scanf("%d", &t);
            if(t <= x) z++;
        }
        if(x > y){
            printf("%d\n", n);
            continue;
        }

        int ans = z/2;
        if(ans*2 != z) ans++;
        printf("%d\n", ans);
    }
}
