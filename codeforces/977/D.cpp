#include <bits/stdc++.h>
using namespace std;

long long int ara[110];
long long int ansara[110];

map <long long int, long long int> amarmap;

int main(){
    long long int n;

    while(scanf("%lld", &n) == 1){
        amarmap.clear();
        for(long long int i = 0; i < n; i++){
            scanf("%lld", ara+i);
            amarmap[ara[i]]++;
        }
        for(long long int i = 0; i < n; i++){
            map <long long int, long long int> amarmap2 = amarmap;
            long long int num = ara[i];
            long long int ansindex = 0;
            ansara[ansindex++] = num;
            while(1){
                if(ansindex == n){
                    break;
                }
                else if(num%3 == 0 && amarmap2[num/3] > 0){
                    ansara[ansindex++] = num / 3;
                    amarmap2[num/3]--;
                    num /= 3;
                }
                else if(amarmap2[num*2] > 0){
                    ansara[ansindex++] = num*2;
                    amarmap2[num*2]--;
                    num *= 2;
                }
                else break;
            }
            if(ansindex == n){
                for(long long int i = 0; i < ansindex; i++)
                    printf(i == ansindex-1 ? "%lld\n":"%lld ", ansara[i]);
                break;
            }
        }
    }

    return 0;
}
