#include <bits/stdc++.h>
using namespace std;

#define inf 1 << 28

#define ll long long int

void merge_sort(ll* num, ll lo, ll hi){
    if(lo == hi) return;
    ll mid = lo + (hi - lo) / 2;

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

ll findlessthanoreq(ll* ara, ll lo, ll hi, ll num){
    if(lo > hi) return 0;
    if(lo == hi)
    {
        if(ara[lo] <= num) return lo;
        else return 0;
    }
    ll mid = lo + (hi - lo) / 2;
    if(ara[mid] <= num && ara[mid+1] > num) return mid;
    else if(ara[mid] <= num) return findlessthanoreq(ara, mid+1, hi, num);
    else return findlessthanoreq(ara, lo, mid-1, num);
}

int main(){
    ll n, m;
    while(scanf("%lld %lld", &n, &m) == 2){
        ll a[n+2];
        for(ll i = 1; i <= n; i++ )
            scanf("%lld", a+i);
        a[n+1] = inf;
        merge_sort(a, 1, n);
        for(ll i = 1; i <= m; i++){
            ll num;
            scanf("%lld", &num);
            ll ans = findlessthanoreq(a, 1, n, num);
            printf("%lld ", ans);
        }
        printf("\n");
    }
}
