#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int a[n+1];
        for(int i = 0; i < n; i++) scanf("%d", a+i);
        int kount = 1, ans = 1;
        for(int i = 1; i < n; i++){
            if(a[i] > 2*a[i-1]){
                if(kount > ans) ans = kount;
                kount = 1;
            }
            else kount++;
        }
        if(kount > ans) ans = kount;
        printf("%d\n", ans);
    }
}
