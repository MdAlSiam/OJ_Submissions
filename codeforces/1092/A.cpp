#include <bits/stdc++.h>
using namespace std;

int main(){
    char a = 'a'-1;
    int n, k, test;
    cin >> test;
    while(test--){
            cin >> n >> k;
        int p= min(k, 26);
        char x[n+4];
        /*for(int i = 1; i <= p; i++){
            x[i] = a+i;
        }
        //x[n+1] = 0;
        for(int i = p+1; i <= n; i++) x[i] = 'w';
        x[n+1] = 0;
        for(int i = 1; i <= n; i++) printf("%c", x[i]);*/

        int kk = p, add = 1;
        for(int i = n-1; i >= 0; i--){
            x[i] = a+add;
            add++;
            kk--;
            /*if(kk == 0 && i < k){
                kk = p;
                add--;
            }

            else if(i < k){
                add--;
            }*/

            if(kk == 0){
                kk = p;
                add = 1;
            }
        }

        int limit =  n % k;
        for(int i = 0; i < limit; i++){
            x[i] = x[limit];
        }

        x[n] = 0;

        printf("%s\n", x);
    }
}
