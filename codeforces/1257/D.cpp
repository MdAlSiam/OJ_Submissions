#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define maxn 1000009

ll t, n, m, mpow[maxn], hp[maxn], he[maxn], maxpow[maxn];
vector<pair<ll, ll> > v;
vector<ll> w;

int main(){
    scanf("%lld", &t);

    while(t--){

        ///Beginning of test

        v.clear(); w.clear();

        scanf("%lld", &n);

        for(ll i = 1; i <= n; i++){
            scanf("%lld", &mpow[i]);
        }

        scanf("%lld", &m);

        for(ll i = 1; i <= m; i++){
            scanf("%lld %lld", &hp[i], &he[i]);
            v.push_back({  he[i], hp[i]  });
            w.push_back(  he[i] );
        }

        sort(v.begin(), v.end());
        sort(w.begin(), w.end());

        for(ll i = m-1; i >= 0; i--){
            if(i == m-1){maxpow[i] = v[i].second; continue;}
            maxpow[i] = max(maxpow[i+1], v[i].second);
        }

        ll recmp = 0, kountsofar = 0, ans = 0;
        for(int i = 1; i <= n; i++){
            kountsofar++;
            recmp = max(recmp, mpow[i]);

            vector<ll>::iterator it;
            it = lower_bound(w.begin(), w.end(), kountsofar);

            if(it - w.begin() == m or maxpow[it-w.begin()] < recmp){
                ans++;
                kountsofar = 1;
                recmp = mpow[i];

                if(maxpow[0] < mpow[i]){
                    ans = -1; break;
                }
            }
        }
        if(ans != -1) printf("%lld\n", ++ans);
        else printf("-1\n");

        ///End of test
    }
}
