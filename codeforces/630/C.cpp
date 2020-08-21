#include <stdio.h>
#include <math.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    long long int ans = 0, i;
    for(i = 1; i <= n; i++){
        long long int temp = 1;
        for(long long int j =1 ;j <= i; j++) temp *= 2;
        ans += temp;
    }
    printf("%lld\n", ans);
}