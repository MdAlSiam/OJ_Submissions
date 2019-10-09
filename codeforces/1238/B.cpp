#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){

        int n, r;
        scanf("%d %d", &n, &r);
        int init_r = r;

        int ara[n+5], index = 0;

        bool checker[100005];
        memset(checker, false, sizeof(checker));

        int mini = INT_MAX, maxi = -1;

        for(int i = 0; i < n; i++){
            int t;
            scanf("%d", &t);
            if(checker[t]) continue;
            ara[index++] = t;
            checker[t] = true;
            //if(t < mini)  mini = t;
            //if(t > maxi) maxi = t;
        }

//
//        for(int i = 1; i <= maxi+3; i++){
//            if(checker[i]) ara[index++] = i;
//        }

        sort(ara, ara+index);

        int kount = 0;

        for(int i = index-1; i >= 0; i--){

            if(i == index-1 ){kount++; continue;}

            if(ara[i] - r <= 0) break;

            kount++;
            r += init_r;
        }

        printf("%d\n", kount);

    }
}
