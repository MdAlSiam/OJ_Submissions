#include <bits/stdc++.h>
using namespace std;

#define int long long int

int n, m;
vector<int> adj_list[500005];
set<int> st;
int node1, node2;
int topicinnode[500005];
vector<int> nodesfortopic[500005];
bool covered[500005];
vector<int> ans;

int32_t main(){
    cin >> n  >> m;
    for(int i = 0; i < m; i++){
        cin >> node1 >> node2;
        adj_list[node1].push_back(node2);
        adj_list[node2].push_back(node1);
    }
    for(int i = 1; i <= n; i++){
        cin >> topicinnode[i];
        nodesfortopic[topicinnode[i]].push_back(i);
        covered[i] = false;
    }

    for(int i = 1; i <= n; i++){//ith topic
        for(int j = 0; j < nodesfortopic[i].size(); j++){//all nodes to have ith topic

            int curr_node = nodesfortopic[i][j];
            st.clear();

            for(int k = 0; k < adj_list[curr_node].size(); k++){
                int adj_node = adj_list[curr_node][k];
                if(covered[adj_node] && topicinnode[adj_node] < i){
                    st.insert(topicinnode[adj_node]);
                }
                if(covered[adj_node] && topicinnode[adj_node] == i){
                    cout << -1 << endl;
                    return 0;
                }
            }

            if(st.size() == i-1){
                covered[curr_node] = true;
                ans.push_back(curr_node);
            }
            else{
                cout << -1 << endl;
                return 0;
            }

        }
    }

    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}
