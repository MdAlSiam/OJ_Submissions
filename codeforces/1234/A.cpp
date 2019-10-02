#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    scanf("%d", &q);

    while(q--){
        int n;
        scanf("%d", &n);

        int sum = 0, temp;

        for(int i = 0; i < n; i++)
            scanf("%d", &temp), sum += temp;

        int ans = sum / n;
        if(ans*n != sum) ans++;

        printf("%d\n", ans);

    }
}
