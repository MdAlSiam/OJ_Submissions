#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int n, x, a, b, t;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d %d %d", &n, &x, &a, &b);

        int maxdis = n-1;

        int curr_dis = abs(a-b);

        if(curr_dis + x <= maxdis) curr_dis += x;
        else curr_dis = maxdis;

        printf("%d\n", curr_dis);
    }
}
