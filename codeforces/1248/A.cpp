#include <bits/stdc++.h>
using namespace std;

#define maxn 100005

#define int long long int

int n;
int p[maxn];
int m;
int q[maxn];

void input_solve(){
    scanf("%lld", &n);
    int odd1 = 0, even1 = 0;
    for(int i = 1; i <= n; i++) {
            scanf("%lld", p+i);
            //p[i] += 1;
            if(p[i] & 1) odd1++;
            else even1++;
    }
    scanf("%lld", &m);
    int odd2 = 0, even2 = 0;
    for(int i = 1; i <= m; i++) {
            scanf("%d", q+i);
            //q[i] -= 1;
            if(q[i] & 1) odd2++;
            else even2++;
    }

    printf("%lld\n", odd1*odd2+even1*even2);

}

int32_t main(){
    int test;
    scanf("%lld", &test);
    while(test--){
        input_solve();
    }
}
