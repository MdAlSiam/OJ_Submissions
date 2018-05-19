#include <bits/stdc++.h>
using namespace std;

int main(){
    char x[100005];
    char *p, *q;
    //while(EOF){
         //char *p, *q;
         scanf("%s", x);
         p = strstr(x, "AB");
         q = strstr(x, "BA");
         if(p && strstr(p+2, "BA")) printf("YES\n");
         else if (q && strstr(q+2, "AB")) printf("YES\n");
         else printf("NO\n");
    //}
    return 0;
}
