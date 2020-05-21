#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int toadd = 1, sum = 0, kount = 0;

    while(1){
        sum += toadd;
        kount++;
        if(sum >= n) break;
        toadd *= 2;
    }

    printf("%d\n", kount);
}
