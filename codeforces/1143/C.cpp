#include <bits/stdc++.h>
using namespace std;

#define ll long long int

list <ll> adj_list[100005];
ll p[100005], c[100005];
bool visited[100005];

vector<ll> ans;

void DFS(ll u){
    visited[u] = true;

    bool allone = true;
    list <ll> :: iterator it;
    for(it = adj_list[u].begin(); it != adj_list[u].end() && c[u] == 1; it++){
        ll v = *it;
        if(c[v] == 0){
            allone = false;
            break;
        }
    }

    if(allone && c[u] == 1) ans.push_back(u);

    for(it = adj_list[u].begin(); it != adj_list[u].end(); it++){
        ll v = *it;
        if(!visited[v]) DFS(v);
    }
}

int main(){
    ll n, root;
    scanf("%lld", &n);

    for(ll i = 1; i <= n; i++){
        scanf("%lld %lld", &p[i], &c[i]);
        if(p[i] == -1) {root = i; continue;}
        adj_list[p[i]].push_back(i);
    }

    memset(visited, false, sizeof(visited));
    DFS(root);

    sort(ans.begin(), ans.end());
    ll siz = ans.size();

    if(siz == 0){
        printf("-1\n");
        return 0;
    }

    for(ll i = 0; i < siz; i++){
        printf((i == siz) ? "%lld\n" : "%lld ", ans[i]);
    }
}
