#include <bits/stdc++.h>

using namespace std;

#define ll long long int

int main(){
    string x;
    while(cin >> x){
        ll len = x.length(), n;

        if(((x[len-1] - '0') & 1)){printf("0\n"); continue;}

        if(len == 1) n =  (x[len-1] - '0');
        else n = (x[len-1] - '0') + (x[len-2] - '0') * 10;

        if(n % 4 == 0) printf("4\n");
        else printf("0\n");
    }
}
