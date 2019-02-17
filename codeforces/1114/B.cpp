#include <bits/stdc++.h>
using namespace std;

#define ll long long int

typedef struct pairy{ll data, index;};

bool compare(pairy a, pairy b){return a.data > b.data;}

int main(){
    ll n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    pairy ara[n+2];

    for(ll i = 0; i < n; i++){
        pairy temp;
        scanf("%lld", &temp.data);
        temp.index = i+1;
        ara[i] = temp;
    }

    sort(ara, ara+n, compare);

    ll ans = 0;

    for(ll i = 0; i < m*k; i++)
        ans += ara[i].data;

    printf("%lld\n", ans);

    ll idx[n+2];

    for(ll i = 0; i < m*k; i++)
        idx[i] = ara[i].index;

    sort(idx, (idx+(m*k)));

    ll mm = m, kk = k-1;

    ll ansara[n+2], index = 0;

    for(ll i = 0; i < m*k; i++){
        mm--;
        if(mm == 0){
            mm = m;
            kk--;
            ansara[index++] = idx[i];
        }
        if(kk == 0) break;
    }

    for(ll i = 0; i < index; i++){
        if(i == 0) printf("%lld", ansara[i]);
        else if(i == index - 1) printf(" %lld\n", ansara[i]);
        else printf(" %lld", ansara[i]);
    }
}
