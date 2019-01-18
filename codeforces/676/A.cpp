#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) == 1){
    int left, right;
    for(int i = 1; i <= n; i++){
        int t;
        scanf("%d", &t);
        if(t == 1) left = i;
        if(t == n) right = i;
    }
    if(left > right) swap(left, right);
    int ans;
    if(abs(left-1) > abs(n-right)){
        ans = right - 1;
    }
    else ans = n - left;
    printf("%d\n", ans);}
}
