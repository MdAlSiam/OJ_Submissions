#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int count = 0;

    count = count + (n/5);

    n = n % 5;

    count = count + (n/4);

    n = n % 4;

    count = count + (n/3);

    n = n % 3;

    count = count + (n/2);

    n = n % 2;

    count = count + n;

    printf("%d\n",count);


    return 0;
}
