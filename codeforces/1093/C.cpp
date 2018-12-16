#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    while(cin >> n){
    //cin >> n;

    long long int given[n+2];
    long long int ans[n+2];

    for(long long int i = 1; i <= (n/2); i++)
        scanf("%lld", given+i);

    ans[1] = 0;
    ans[n] = given[1];

    long long int i, j, k;
    for(i = 2, j = n-i+1, k = 2; i < j; i++, j--, k++){
        long long int total, smaller, bigger, first, second;
        smaller = ans[i-1];
        bigger = ans[j+1];
        total = given[k];

        if(total <= bigger){
            first = smaller;
            second = total - smaller;
        }

        else{
            first = total - bigger;
            second = bigger;
            long long int need;
            if(first < smaller){
                need = smaller - first;
                first += need;
                second -= need;
            }
        }

        ans[i] = first;
        ans[j] = second;
    }

    for(long long int i = 1; i <= n; i++)
        printf(i == n? "%lld\n":"%lld ", ans[i]);

    }
}
