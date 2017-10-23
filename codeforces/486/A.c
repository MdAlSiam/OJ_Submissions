#include <stdio.h>

int main(){
    long long int n, i, j, ps, ns, sum;
    scanf("%lld", &n);

    if(n%2 == 0){
        sum = n/2;
        printf("%lld\n", sum);
    }
    if(n%2 != 0){
        sum = ((n-1)/2) - n;
        printf("%lld\n", sum);
    }
    return 0;
}
