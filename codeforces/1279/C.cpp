#include <bits/stdc++.h>
using namespace std;

#define ll long long int

map<ll, ll> index;
vector<ll> used;

int main(){ll test; scanf("%lld", &test); while(test--){
   index.clear();
   used.clear();
   ll n1, n2;
   scanf("%lld %lld", &n1, &n2);
   for(ll i = 1; i <= n1; i++){
        ll element;
        scanf("%lld", &element);
        index[element] = i;
   }
   for(ll i = 1; i <= n2; i++){
        ll element;
        scanf("%lld", &element);
        used.push_back(index[element]);
   }
   //sort(used.begin(), used.end());
   ll sz = used.size(), maxi = -1, ans = 0, shesh = 0;
   //printf("%lld\n", (used[sz-1]-1)*2 + 1 + (sz-1));
   for(ll i = 0; i < sz; i++){
        //cout << used[i] << " ";
        if(i == 0){
            ans += 1+((used[i]-1)*2);
            maxi = used[i];
            shesh++;
            continue;
        }
        if(used[i] < maxi) {ans += 1; shesh++;}
        else{
            ans += 1+(used[i]-shesh-1)*2;
            maxi = used[i];
            shesh++;
        }
   }
   printf("%lld\n", ans);
}}
