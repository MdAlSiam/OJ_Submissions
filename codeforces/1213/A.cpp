#include <bits/stdc++.h>
using namespace std;

#define ll long long int

//int ara[105];

int main(){
    int n;
    scanf("%d", &n);

    int jor = 0, bijor = 0;

    for(int i = 1; i <= n; i++){
        int t;
        scanf("%d", &t);
        if(t & 1) bijor++;
        else jor++;
    }

    printf("%d\n", min(jor, bijor));
}
