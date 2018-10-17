#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 100000000

ll memtab[112][112][2][15];

ll explore(ll rem_x, ll rem_y, ll prev_type, ll prev_qty, ll k1, ll k2){
    if(memtab[rem_x][rem_y][prev_type][prev_qty] != -1)
        return memtab[rem_x][rem_y][prev_type][prev_qty];

    if(rem_x == 0 && rem_y == 0) return 1;

    ll kount = 0;
    if(prev_type == 0){
        if(rem_y > 0) kount += explore(rem_x, rem_y-1, 1, 1, k1, k2);
        if(prev_qty+1 <= k1 && rem_x > 0)
            kount += explore(rem_x-1, rem_y, 0, prev_qty+1, k1, k2);
    }
    else if(prev_type == 1){
        if(rem_x > 0) kount += explore(rem_x-1, rem_y, 0, 1, k1, k2);
        if(prev_qty+1 <= k2 && rem_y > 0)
            kount += explore(rem_x, rem_y-1, 1, prev_qty+1, k1, k2);
    }

    kount %= mod;
    memtab[rem_x][rem_y][prev_type][prev_qty] = kount;
    return kount;
}

int main(){
    memset(memtab, -1, sizeof memtab);
    ll n1, n2, k1, k2;
    scanf("%lld %lld %lld %lld", &n1, &n2, &k1, &k2);
    printf("%lld\n", explore(n1, n2, 0, 0, k1, k2));
}
