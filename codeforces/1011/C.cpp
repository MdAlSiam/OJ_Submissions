#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n  >> m;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= 1){
            printf("-1\n");
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i] <= 1){
            printf("-1\n");
            return  0;
        }
    }

    double s = m;

    s += s / (b[0] - 1);

    for(int i = n-1; i >= 1; i--){
        s += s / (a[i] - 1);
        s += s / (b[i] - 1);
    }

    s += s / (a[0] - 1);

    printf("%.10lf\n", s - m);
}
