#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll n;
    scanf("%lld", &n);
    ll ara[n+6];

    for(ll i = 0; i < n; i++){
        scanf("%lld", ara+i);
    }

    ll finalfactor = INT_MAX;
    ll finalcost = INT_MAX;

    ll target1, target2, currcost, target3;

    for(ll i = 1; i <= 103; i++){
        target1 = i+1;
        target2 = i-1;
        target3 = i;
        currcost = 0;
        for(ll ii = 0; ii < n; ii++){
            ll temp;
            temp = min( abs(ara[ii] - target1) , abs(ara[ii] - target2));
            temp = min( temp , abs(ara[ii] - target3));
            //if(i == 2) cout << abs(ara[ii] - target1) << " " << abs(ara[ii] - target2) << endl;
            //if(i == 2) cout << ii << " " << currcost << endl;
            currcost += temp;
        }

        if(currcost < finalcost){
            finalcost = currcost;
            finalfactor = i;
        }
    }

    printf("%lld %lld\n", finalfactor, finalcost);
}
