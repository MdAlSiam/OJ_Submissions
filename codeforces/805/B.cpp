#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    char ch[4] = {'b', 'b', 'a', 'a'};

    for(int i = 0; i < n; i++)
        printf("%c", ch[i%4]);
    printf("\n");
}
