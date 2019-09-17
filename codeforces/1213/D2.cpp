#include <bits/stdc++.h>
using namespace std;

vector <int> v[200005];

int main(){
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    int ara[n+5];
    for(int i = 0; i < n; i++)
        scanf("%d", ara+i);

    for(int i = 0; i < n; i++){
        int curr = ara[i];
        v[curr].push_back(0);
        int b = 0;
        while(curr > 0){
            curr /= 2;
            b++;
            v[curr].push_back(b);
        }
    }

    int ans = INT_MAX;

    for(int i = 1; i < 200005; i++){
        int sz = v[i].size();
        if(sz < k) continue;
        sort(v[i].begin(), v[i].end());
        int tempans = 0;
        for(int xx = 0; xx < k; xx++)
            tempans += v[i][xx];
        if(tempans < ans) ans = tempans;
    }

    printf("%d\n", ans);

}

