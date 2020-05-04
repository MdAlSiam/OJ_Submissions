#include <bits/stdc++.h>
using namespace std;

int n, k;
int n1, n2, satisfied;
int dad[100005];

int finddad(int son){
    if(dad[son] == son) return son;
    else return dad[son] = finddad(dad[son]);
}

void join(int n1, int n2){
    int dad1 = finddad(n1);
    int dad2 = finddad(n2);
    if(dad1 == dad2) return;
    dad[dad1] = dad2;
    satisfied++;
}

int main(){
    //cin >> n >> k;
    scanf("%d %d", &n, &k);

    int kk = k;

    for(int i = 1; i <= n; i++)
        dad[i] = i;

    while(k--){
        //cin >> n1 >> n2;
        scanf("%d %d", &n1, &n2);
        join(n1, n2);
    }

    //cout << kk - satisfied << endl;
    printf("%d\n", kk - satisfied);
}
