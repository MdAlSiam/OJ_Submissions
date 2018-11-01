#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void merge_sort(ll* num, ll lo, ll hi){
    if(lo == hi) return;

    ll mid = lo + ((hi - lo) >> 1);

    merge_sort(num, lo, mid);
    merge_sort(num, mid+1, hi);

    ll temp[hi-lo+9];

    for(ll i = lo, j = mid+1, k = 0, kk = lo; kk <= hi; k++, kk++){
        if(i == mid+1) temp[k] = num[j++];
        else if(j == hi+1) temp[k] = num[i++];
        else if(num[i] < num[j]) temp[k] = num[i++];
        else temp[k] = num[j++];
    }

    for(ll xx = lo, yy = 0; xx <= hi; xx++, yy++)
        num[xx] = temp[yy];
}

int main(){

    ll n, taplen;
    while(scanf("%lld %lld", &n, &taplen)==2){

    ll profit[n+6];
    ll totallarge = 0, totalcompressed = 0, totalprofit = 0;

    for(ll i = 0; i < n; i++){
        ll large, compressed;
        scanf("%lld %lld", &large, &compressed);
        profit[i] = large - compressed;
        totallarge += large;
        totalcompressed += compressed;
        totalprofit += profit[i];
    }

    if(taplen >= totallarge){
        printf("0\n");
        continue;
    }

    ll needed = totallarge - taplen;

    if(needed > totalprofit){
        printf("-1\n");
        continue;
    }

    merge_sort(profit, 0, n-1);

    ll covered = 0, ans = 0;

    for(ll i = n-1; i >= 0; i--){
        covered += profit[i];
        ans++;
        if(covered >= needed){
            break;
        }
    }

    printf("%d\n", ans);}
}
