#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define maxnum 1000006

ll ara[maxnum];
ll maxrange[maxnum];
ll kount[maxnum];

int main(){
    ll n;
    scanf("%lld", &n);

    for(ll i = 1; i <= n; i++)
        scanf("%lld", ara+i);

    ll maxlen = -1;

    for(ll i = 1; i <= n; i++){

        ll left, right;
        left = right = i;

        while(1){
            if(ara[left-1] % ara[i] == 0 && left-1 > 0) left--;
            else break;
        }

        while(1){
            if(ara[right+1] % ara[i] == 0 && right+1 <= n) right++;
            else break;
        }

        ll curr_len = right - left;

        //cout << i << " " << left << " " << right << endl;

        if(curr_len >= maxlen){
            if(maxrange[left] == curr_len && curr_len != 0) continue;
            maxrange[left] = curr_len;
            maxlen = curr_len;
            kount[curr_len]++;
        }

        i = right;
    }

    printf("%lld %lld\n", kount[maxlen], maxlen);

    for(ll i = 1; i <= n; i++){
        if(maxrange[i] == maxlen)
            printf("%lld ", i);
    }
}
