#include <bits/stdc++.h>
using namespace std;

#define inf 999999

int main(){

    int test;
    scanf("%d", &test);

    while(test--){

        int n;
        scanf("%d", &n);

        int ara[n+1], lastseen[n+1], len[n+1];

        for(int i = 1; i <= n; i++)
            scanf("%d", ara+i);

        for(int i = 1; i <= n; i++)
            lastseen[i] = -1;

        for(int i = 1; i <= n; i++)
            len[i] = inf;

        for(int i = 1; i <= n; i++){
            if(lastseen[ara[i]] == -1)
                lastseen[ara[i]] = i;
            else{
                if(i - lastseen[ara[i]] < len[ara[i]])
                    len[ara[i]] = i - lastseen[ara[i]];
                lastseen[ara[i]] = i;
//                cout << "UPD " << i << " " << lastseen[i] << " " << len[i] << endl;
            }
        }

//        cout << "okoko\n";
//        for(int i = 1; i <= n; i++)
//            cout << i << " " << lastseen[i] << " " << len[i] << endl;

        int ans = inf;
        for(int i = 1; i <= n; i++){
            if(ans > len[i]) ans = len[i];
        }

        if(ans == inf) printf("-1\n");
        else printf("%d\n", ++ans);
    }
}
