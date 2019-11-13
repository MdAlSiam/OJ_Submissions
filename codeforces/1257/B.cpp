#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int n, x, a, b, t;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &a , &b);

        bool ok = false;

        if(a == b) ok = 1;
        else if(a == 1) ok = 0;
        else if(a == 2 && b == 1) ok = 1;
        else if(a == 2 && b == 3) ok = 1;
        else if(a == 3 && b <= 2) ok = 1;
        else if(a > 3) ok = 1;

        if(ok) printf("YES\n");
        else printf("NO\n");

    }
}
