#include <bits/stdc++.h>
using namespace std;

int main(){
//while(1){
    int n;
    scanf("%d", &n);

    int ara[n+4];
    for(int i = 0; i < n; i++)
        scanf("%d", ara+i);

    int lp = 0, rp = n-1;
    int prev = -1;
    char ans[n+6];
    int index = 0;

    while(lp <= rp){
        if(ara[lp] == ara[rp] && ara[lp] > prev){
            //int index_start = index;
            int len1(1), len2(1);
            //ans[index++] = ara[lp];

            for(int k = lp+1; k < n; k++){
                if(ara[k] > ara[k-1]){len1++;}
                else break;
            }

            for(int k = rp-1; k >= 0; k--){
                if(ara[k] > ara[k+1]){len2++;}
                else break;
            }


            for(int ii = 0; ii < len1 && len1 > len2; ii++)
                ans[index++] =  'L';
            for(int ii = 0; ii < len2 && len1 <= len2; ii++)
                ans[index++] =  'R';

            break;
        }
        else if(lp == rp && ara[lp] > prev){
            ans[index++] = 'R';
            break;
        }
        else if(lp == rp) break;
        else if(prev < ara[lp] && ara[lp] < ara[rp]){
            ans[index++] = 'L';
            prev = ara[lp];
            lp++;
        }
        else if(prev < ara[rp] && ara[rp] < ara[lp]){
            ans[index++] = 'R';
            prev = ara[rp];
            rp--;
        }
        else if(prev < ara[lp]){
            ans[index++] = 'L';
            prev = ara[lp];
            lp++;
        }
        else if(prev < ara[rp]){
            ans[index++] = 'R';
            prev = ara[rp];
            rp--;
        }
        else break;
    }

    printf("%d\n", index);
    for(int i = 0; i < index; i++)
        printf(i == index-1 ? "%c\n":"%c", ans[i]);
//}
}
