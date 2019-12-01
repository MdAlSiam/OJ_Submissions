#include <bits/stdc++.h>
using namespace std;

#define ll long long int

map<ll, ll> mp;

int main(){

    ll n;

    while(scanf("%lld", &n) == 1){

        ll ara[n+4], kount[n+4], sum[n+4];

        mp.clear();

        for(ll i = 1; i <= n; i++){
            scanf("%lld", ara+i);

        }

        kount[0] = sum[0] = 0;

        for(ll i = 1; i <= n; i++){

            if(ara[i] < 0)  kount[i] = kount[i-1]-1;
            else  kount[i] = kount[i-1]+1;

            sum[i] = sum[i-1] + ara[i];
        }

        set<ll> st;
        st.clear();

        ll ansara[n+4], index = 1;
        ansara[0] = 0;
        bool hobena = false;

        for(ll i = 1; i <= n; i++){

            if(ara[i] > 0) {
                if(mp[ara[i]] == 0){}
                else{hobena = true; /*cout << i << " <-ind cs 1\n";*/ break;}

                mp[ara[i]] = 1;
                st.insert(ara[i]);
            }
            if(ara[i] < 0){
                if(mp[ara[i]*-1] == 1){}
                else{hobena = true; /*cout << i << " <-ind cs 2\n";*/   break;}

                mp[ara[i]*-1] = 0;
            }
            if(kount[i] == 0 && sum[i] == 0){
                if(i - ansara[index-1] == (st.size())*2){
                    ansara[index++] = i;
                    st.clear();
                    mp.clear();
                }
                else{hobena = true; break;}
            }
            if(kount[i] < 0 || sum[i] < 0) {hobena = true; break;}
            if(kount[i] == 0 && sum[i] != 0){hobena = true; break;}
            if(kount[i] != 0 && sum[i] == 0){hobena = true; break;}
            if(i == n && (kount[i] != 0 || sum[i] != 0) ){hobena = true; break;}
        }

        if(hobena){printf("-1\n"); continue;}
        printf("%lld\n", index-1);
        printf("%lld", ansara[1]);

        for(ll i = 2; i < index; i++) printf(" %lld", ansara[i]-ansara[i-1]);
        printf("\n");
    }///test


}
