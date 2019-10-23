#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<int> adj_list[200005];
int val[200005];

int ans;

int dfs(int start, int here, int kount){

//    cout << "Start Here Count" << endl;
//    cout << start << "\t" << here << "\t" << kount << endl;

    if(here == start && kount != 0){
        return kount;
    }

    int sz = adj_list[here].size(), ret;

    for(int i = 0; i < sz; i++){
        int to = adj_list[here][i];
        ret = dfs(start, to, kount+1);
    }

    return val[here] = ret;
}

int main(){

    int q;
    scanf("%d", &q);

    while(q--){

        int n;
        scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            int t;
            scanf("%d", &t);
            adj_list[i].push_back(t);
        }

        for(int i = 1; i <= n; i++){
            if(val[i] == 0)
            int xx = dfs(i, i, 0);
            ans = val[i];
            //printf( "Ans = %d\n", answer);
            //cout << "Answered\n";
            printf(i == n? "%d\n" : "%d ", ans);
        }

        for(int i = 1; i <= n; i++){
            adj_list[i].clear();
            val[i] = 0;
        }
    }
}

