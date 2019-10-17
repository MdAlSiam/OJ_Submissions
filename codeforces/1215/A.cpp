#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, k1, k2, n;
    scanf("%d %d %d %d %d", &a1, &a2, &k1, &k2, &n);
    int mini, maxi;
    mini = maxi = 0;

    mini = n - (a1*(k1-1)) - (a2*(k2-1));

    if(mini < 0) mini = 0;

    ///Assuming k1 <= k2

    if(k1 > k2){swap(k1, k2); swap(a1, a2);}

    maxi += min(a1, n/k1);
    n -= maxi*k1;
    maxi += min(a2, n/k2);

    printf("%d %d\n", mini, maxi);
}

