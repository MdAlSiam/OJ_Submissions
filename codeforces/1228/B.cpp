#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main(){
//while(1){
    int n, m;
    scanf("%d %d", &n, &m);

    int r[n+2], c[m+2];
    for(int i = 1; i <= n; i++)
        scanf("%d", r+i);
    for(int i = 1; i <= m; i++)
        scanf("%d", c+i);

    if(n == 1 || m == 1){cout << 0 << endl; return 0;}

    int kount = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){

            if(i == 1 && c[j] == 0 && r[i] >= j){
                cout << 0 << endl; return 0;
            }

            if(j == 1 && r[i] == 0 && c[j] >= i){
                cout << 0 << endl; return 0;
            }



            if(r[i]+1 == j && c[j] >= i){
                cout << 0 << endl; return 0;
            }
            if(c[j]+1 == i && r[i] >= j){
                cout << 0 << endl; return 0;
            }

            if(i == 1 || j == 1) continue;



            bool thr_ro = false;
            bool thr_col = false;

            if(j > r[i]+1) thr_ro = true;
            if(i > c[j]+1) thr_col = true;

            //cout << i << " " << j << " => " << thr_ro << " " << thr_col << endl;

            if(thr_ro && thr_col) kount++;

        }
    }

    int ans = 1;
    for (int i = 1; i <= kount; i++){
        ans *= 2;
        ans %= mod;
    }

    printf("%d\n", ans);
//}
}
