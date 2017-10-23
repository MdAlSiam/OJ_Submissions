#include <stdio.h>

int main(){
    long long int n, m, a;

    scanf("%lld %lld %lld", &n, &m, &a);

    long long int p,q, num;

    if(n%a == 0) p = n/a;
    else p = (n/a) + 1;

    if(m%a == 0) q = m/a;
    else q = (m/a) + 1;

    num = p*q;

    printf("%lld\n", num);

    return 0;
}


