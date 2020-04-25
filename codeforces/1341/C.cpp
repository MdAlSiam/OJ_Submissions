#include <bits/stdc++.h>
using namespace std;

#define maxn 200005

int test;
int n;
int ara[maxn];
int pos[maxn];

int main(){
    scanf("%d", &test);
    while(test--){
        scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            scanf("%d", ara+i);
            pos[ara[i]] = i;
        }

        bool yes = false;

        int curr_pos = pos[1];
        int curr_num = 1;

        while(1){
            curr_pos++;
            curr_num++;

            //printf("Pos: %d Number: %d\n", curr_pos, curr_num);

            if(curr_num > n) {yes = true; break;}

            if(ara[curr_pos] == curr_num && curr_pos <= n){}
            else if(pos[curr_num] < curr_pos) curr_pos = pos[curr_num];
            else break;
        }

        if(yes) printf("Yes\n");
        else printf("No\n");

    }

    return 0;
}

