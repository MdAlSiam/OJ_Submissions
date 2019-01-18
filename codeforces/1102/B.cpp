#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    vector <int> v[5100];
    /// i th row collects the indexes
    /// in which i occurs in the given array.

    int elementkount[5500];
    for(int i = 0; i < 5500; i++) elementkount[i] = 0;
    int ansara[5500];
    bool hobena = false;

    for(int i = 1; i <= n; i++){
        int t;
        scanf("%d", &t);
        elementkount[t]++;
        if(elementkount[t] > k)
            hobena = true;
        v[t].push_back(i);
    }

    int kk = 0;

    for(int i = 0; i < 5100; i++){
        for(int j = 0; j < v[i].size(); j++){
            if(v[j].size() > k){hobena = true; break;}
            ansara[v[i][j]] = (kk % k) + 1;
            kk++;
        }
    }

    if(hobena) printf("NO\n");
    else printf("YES\n");

    for(int i = 1; i <= n && !hobena; i++)
        printf("%d ", ansara[i]);
    printf("\n");
}
