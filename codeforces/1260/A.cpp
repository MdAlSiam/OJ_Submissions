#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        int c, sum;
        scanf("%d %d", &c, &sum);
        int each = sum / c;
        int baki = sum % c;
        cout << baki*(each+1)*(each+1) + (c-baki)*each*each << endl;
    }
}
