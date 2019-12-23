#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int test;
    scanf("%d", &test);
    while(test--){
        int a[3];
        for(int i = 0; i < 3; i++)
            scanf("%d", a+i);
        sort(a, a+3);
        if(a[0] == a[1] && a[1] != a[2]){
            a[0] += 1;
            a[1] += 1;
            if(a[1] < a[2]) a[2] -= 1;
        }
        else if(a[0] != a[1] && a[1] == a[2]){
            a[1] -= 1;
            a[2] -= 1;
            if(a[0] < a[1]) a[0] += 1;
        }
        else{
            if(a[0] < a[1]) a[0] += 1;
            if(a[1] < a[2]) a[2] -= 1;
        }

        //cout << a[0] << " " << a[1] << " " << a[2] << endl;

        printf("%d\n", a[1]-a[0]+a[2]-a[1]+a[2]-a[0]);
    }
}
