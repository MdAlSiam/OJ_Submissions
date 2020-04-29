#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int ara[n];
    for(int i = 0; i < n; i++) scanf("%d", ara+i);

    sort(ara, ara+n);

    bool visited[n];
    for(int i = 0; i < n; i++) visited[i] = false;

    int ans = 0;

    for(int i = 0; i < n; i++){
        if(visited[i] == true) continue;
        visited[i] = true;
        ans++;
        for(int j = i+1; j < n; j++){
            if(ara[j] % ara[i] == 0) visited[j] = true;
        }
    }

    printf("%d\n", ans);
}
