#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int n, m;
int u[200005], v[200005];
int color[200005];
list <int> adj_list[200005];

bool bicolorable(int src){
    stack <int> st;
    st.push(src);
    color[src] = 0;

    while(!st.empty()){
        int u = st.top();
        st.pop();

        list<int>:: iterator it;

        for(it = adj_list[u].begin(); it != adj_list[u].end(); it++){
            int v = *it;
            if(color[v] == -1){
                if(color[u] == 0)
                    color[v] = 1;
                else color[v] = 0;
                st.push(v);
            }
            if(color[u] == color[v]) return false;
        }
    }

    return true;
}

int main(){
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; i++){
        scanf("%d %d", &u[i], &v[i]);
        adj_list[u[i]].push_back(v[i]);
        adj_list[v[i]].push_back(u[i]);
    }

    memset(color, -1, sizeof(color));

    if(!bicolorable(1)){
        printf("NO\n");
        return 0;
    }

    printf("YES\n");

    for(int i = 1; i <= m; i++){
        if(color[u[i]] == 0 && color[v[i]] == 1)
            printf("0");
        else printf("1");
        if(i == m) printf("\n");
    }
}
