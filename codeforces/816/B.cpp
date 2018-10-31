#include <bits/stdc++.h>
using namespace std;

#define inf 1 << 28

int amarmap[200005];
int cumsum[200005];

int main(){
    int n, k, q, mini = inf, maxi = -inf;

    scanf("%d %d %d", &n, &k, &q);

    while(n--){
        int l, r;
        scanf("%d %d", &l, &r);
        mini = min(l, mini);
        mini = min (r, mini);
        maxi = max(l, maxi);
        maxi = max(r, maxi);
        amarmap[l]++;
        amarmap[r+1]--;
    }

    for(int i = mini; i <= maxi+1; i++){
        amarmap[i] += amarmap[i-1];
    }

    for(int i = mini; i < 200005; i++){
        if(amarmap[i] >= k) cumsum[i] = 1+cumsum[i-1];
        else cumsum[i] = cumsum[i-1];
    }

    while(q--){
        int l, r;
        int kount = 0;
        scanf("%d %d", &l, &r);
        kount = cumsum[r] - cumsum[l-1];
        printf("%d\n", kount);
    }
}
