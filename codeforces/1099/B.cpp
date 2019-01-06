#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int ans = sqrt(n); //1
        int sq_made = ans*ans; //1
        int finalans = 2*ans; //2
        if(sq_made < n && n - sq_made <= ans) finalans++;
        else if(sq_made < n && n - sq_made > ans) finalans += 2;
        printf("%d\n", finalans);
    }
}
