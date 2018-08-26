#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    ll n;
    while(scanf("%lld", &n) == 1){
        //scanf("%lld", &n);
        ll left[n+1], right[n+1];
        for(ll i = 0; i < n; i++) scanf("%lld %lld", left+i, right+i);

        ll sortedleft[n+1], sortedright[n+1];

        for(ll i = 0; i < n; i++){
            sortedleft[i] = left[i];
            sortedright[i] = right[i];
        }

        sort(sortedleft, sortedleft+n, greater<ll>());
        sort(sortedright, sortedright+n);

        ll ans = 0;
        for(ll i = 0; i < n; i++){
            ll mini, maxi, temp;
            if(sortedleft[0] == left[i]) mini = sortedleft[1];
            else mini = sortedleft[0];

            if(sortedright[0] == right[i]) maxi = sortedright[1];
            else maxi = sortedright[0];

            //for(ll zz = 0; zz < n; zz++) printf("%lld ", sortedleft[zz]); printf("\n");
            //for(ll zz = 0; zz < n; zz++) printf("%lld ", sortedright[zz]); printf("\n");
            //cout << "mini = " << mini << " maxi = " << maxi << endl;

            if(mini > maxi) temp = 0;
            else temp = maxi - mini;

            if(temp > ans) ans = temp;
        }

        printf("%lld\n", ans);
    } //C
}
