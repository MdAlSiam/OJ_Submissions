#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ll n;

    while(scanf("%lld", &n) == 1){

    ll ara[n+5];
    ll ase[n+5];
    memset(ase, 0, sizeof(ase));

    for(ll i = 1; i <= n; i++){
        scanf("%lld", &ara[i]);
        if(ara[i] != 0) ase[ ara[i] ] = 1;
    }

    stack<ll> st;

    for(ll i = 1; i <= n; i++){
        if(ase[i] == 0)
            st.push(i);
    }


    for(ll i = 1, prev; i <= n; i++){
        if(ara[i] == 0){
            ll element = st.top();
            st.pop();
            if(element == i){
                if(st.size() == 0){
                    ll temp = ara[prev];
                    ara[prev] = element;
                    ara[i] = temp;
                }
                else{
                    ll element2 = st.top();
                    st.pop();
                    ara[i] = element2;
                    st.push(element);
                }
            }
            else ara[i] = element;

            prev = i;
        }
    }

    for(ll i = 1; i <= n; i++){
        printf("%lld ", ara[i]);
    }
    printf("\n");

    }
}
