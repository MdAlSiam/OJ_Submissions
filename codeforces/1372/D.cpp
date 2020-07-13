#include <bits/stdc++.h>
using namespace std;

const int64_t maxn = 200005;
int64_t n;
int64_t ara[maxn];
int64_t oddstart[maxn];
int64_t evenstart[maxn];
int64_t ans = -1;
int64_t slide_size;
int64_t index1 = 1, index2 = 1;

int32_t main(){
    cin >> n;
    for(int64_t i = 1; i <= n; i++)
        cin >> ara[i];

    slide_size = (n / 2) + 1;

    for(int64_t i = 1; i <= n; i += 2){
        oddstart[index1] = ara[i] + oddstart[index1-1];
        index1++;
    }
    for(int64_t i = 2; i <= n; i += 2){
        oddstart[index1] = ara[i] + oddstart[index1-1];
        index1++;
    }

    for(int64_t i = 2; i <= n; i += 2){
        evenstart[index2] = ara[i] + evenstart[index2-1];
        index2++;
    }
    for(int64_t i = 1; i <= n; i += 2){
        evenstart[index2] = ara[i] + evenstart[index2-1];
        index2++;
    }

    for(int64_t i = 1; i <= slide_size; i++)
        ans = max(ans, oddstart[i+slide_size-1] - oddstart[i-1]);
    for(int64_t i = 1; i <= slide_size; i++)
        ans = max(ans, evenstart[i+slide_size-1] - evenstart[i-1]);

    cout << ans << endl;
}
