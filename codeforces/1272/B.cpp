#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll q;
    scanf("%lld", &q);
    while (q--)
    {
        string x;
        cin >> x;
        ll len = x.length();
        ll left, right, up, down;
        left = right = up = down = 0;
        for (ll i = 0; i < len; i++)
        {
            if(x[i] == 'L') left++;
            if(x[i] == 'R') right++;
            if(x[i] == 'U') up++;
            if(x[i] == 'D') down++;
        }

        ll uthanama = min(up, down), danbam = min(left, right);
        if(uthanama == 0 && left >= 1 && right >= 1){
            printf("2\nRL\n");
            continue;
        }
        if(danbam == 0 && up >= 1 && down >= 1){
            printf("2\nUD\n");
            continue;
        }
        printf("%lld\n", uthanama*2+danbam*2);
        for(ll i = 0; i < uthanama; i++) printf("U");
        for(ll i = 0; i < danbam; i++) printf("R");
        for(ll i = 0; i < uthanama; i++) printf("D");
        for(ll i = 0; i < danbam; i++) printf("L");
        printf("\n");
    }
    
}