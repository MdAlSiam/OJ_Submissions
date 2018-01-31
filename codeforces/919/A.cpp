#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n, m;
    ll a, b;
    double kg;
    double c_ans, fin_ans;

    scanf("%lld %lld", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%lld %lld", &a, &b);
        kg = (a*1.0) / b;
        c_ans = kg*m;
        if(i == 0) fin_ans = c_ans;
        if(c_ans < fin_ans) fin_ans = c_ans;
    }
    printf("%lf\n", fin_ans);
    return 0;
}


