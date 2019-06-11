#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ll n;
    scanf("%lld", &n);

    ll ara[n+10];

    for(ll i = 1; i <= n; i++){
        scanf("%lld", ara+i);
    }

    ll maxval = -1;
    ll kount = 0;
    set <ll> ans;
    set <ll>:: iterator it;

    for(ll i = 1; i <= n; i++){

        ll left, right;

        left = right = i;
//        while(--left > 0 && ara[left] % ara[i] == 0) left--;
//        while(right < n && ara[right] % ara[i] == 0) right++;

        while(1){
            if(ara[left-1] % ara[i] == 0 && left-1 > 0) left--;
            else break;
        }

        while(1){
            if(ara[right+1] % ara[i] == 0 && right+1 <= n) right++;
            else break;
        }

        ll len = right - left;

        //cout << i << " : " << left << " " << right << " Len: " << len << endl;

        if(len > maxval){
            ans.clear();
            ans.insert(left);
            maxval = len;
            kount = 1;
        }
        else if(len == maxval){
            ans.insert(left);
            kount++;
        }

        i = right;

    }

    ll kk = ans.size();

    printf("%lld %lld\n", kk , maxval);

    ll siz = ans.size();

//    for(ll i = 0; i < siz; i++){
//        printf(i == 0 ? "%lld" : " %lld", ans[i] );
//    }

    bool first = true;
    for(it = ans.begin(); it != ans.end(); it++){
        if(first){
            cout << *it ;
            first = false;
        }
        else{
            cout << " " << *it;
        }
    }
    printf("\n");


}
