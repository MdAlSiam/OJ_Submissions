#include <iostream>
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int main(){
    long long int n, a;
    scanf("%I64d", &n);
    a = n % 10;
    if(a < 5 && a != 0) printf("%I64d\n", (n-a) );
    if(a > 5) printf("%I64d\n", (n-a+10) );
    if(a == 5) printf("%I64d\n", (n-5));
    if(a == 0) printf("%I64d\n", n);
    return 0;
}
