#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll parent[26];
ll present[26];

ll find_parent(ll u){
    if(parent[u] == u) return u;
    return find_parent(parent[u]);
}

void make_friends(ll a, ll b){
    ll u = find_parent(a);
    ll v = find_parent(b);
    if(u == v) return;
    parent[v] = parent[u];
}


int main(){

    ll n;
    scanf("%lld", &n);

    for(ll i = 0; i < 26; i++) parent[i] = i;

    for(ll i = 0; i < n; i++){

        char str[60];
        getchar();
        scanf(" %s", str);

        ll len = 0;

        for(ll j = 0; ; j++){
            if(str[j] == '\0') break;
            len++;
            present[str[j]-'a'] = 1;
        }

        for(ll j = 1; j < len; j++){
            make_friends(str[0]-'a', str[j]-'a');
        }
    }

    ll kount = 0;
    for(ll i = 0; i < 26; i++){
        if(present[i] && parent[i] == i) kount++;
    }

    printf("%lld\n", kount);
}
