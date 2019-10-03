///For low data range

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){

    ll n, k;
    scanf("%lld %lld", &n, &k);

    ll id[n+2];
    for(ll i = 0; i < n; i++)
        scanf("%lld", id+i);

    ll current[k+3], index = 1;

    for(ll i = 0; i < n; i++){
        bool ageichilo = false;
        for(ll j = 0; j < index; j++){
            if(current[j] == id[i])
                {ageichilo = true; break;}
        }
        if(ageichilo) continue;
        if(index == k+1){
            for(ll j = 2; j < index; j++)
                current[j-1] = current[j];
            index--;
        }
        current[index++] = id[i];
    }

    printf("%d\n", index-1);
    for(ll i = index-1; i >= 1; i--)
        printf("%d ", current[i]);
    printf("\n");
}
