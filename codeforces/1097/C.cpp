#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string in;
    map<int, int> mp;
    int ans = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> in;
        int op = 0, cl = 0;
        int siz = in.size();

        for(int i = 0; i < siz; i++){
            if(in[i] == '(') op++;
            else if(in[i] == ')' && op > 0) op--;
            else cl++;
        }

        if(op == 0 && cl == 00){
            if(mp[0] > 0){
                ans++;
                mp[0]--;
            }
            else mp[0]++;
        }
        else if(op > 0 && cl == 0){
            if(mp[-op] > 0){
                ans++;
                mp[-op]--;
            }
            else mp[op]++;
        }

        else if(cl > 0 && op == 0){
            if(mp[cl] > 0){
                ans++;
                mp[cl]--;
            }
            else mp[-cl]++;
        }
    }

    printf("%d\n", ans);
}