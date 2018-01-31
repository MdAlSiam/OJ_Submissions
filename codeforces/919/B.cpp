#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, i, n, sum;
    while(scanf("%d", &k) == 1){
        int kount = 0;
        for(i = 1; ; i++){
            n = i;
            sum = 0;
            while(n != 0){
                sum += (n % 10);
                n = n / 10;
            }
            if(sum == 10) kount++;
            if(kount == k){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
