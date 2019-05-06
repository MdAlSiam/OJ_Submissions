#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, r;
    scanf("%d %d %d", &n, &m, &r);

    //int buy[n+4], sell[n+4];

    int minbuy = INT_MAX, maxsell = -1, t;

    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        if(t < minbuy) minbuy = t;
    }

    for(int i = 0; i < m; i++){
        scanf("%d", &t);
        if(t > maxsell) maxsell = t;
    }

    int num_of_share = r / minbuy;
    int profitted = maxsell*num_of_share;

    if(profitted + r - minbuy*num_of_share < r) printf("%d\n", r);
    else printf("%d\n", profitted + r - minbuy*num_of_share);
}
