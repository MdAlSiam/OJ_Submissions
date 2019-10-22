//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll long long int
//
//int main(){
//
//}


#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int q;
    scanf("%d", &q);

    while(q--){
        int n;
        scanf("%d", &n);

        int ara[n+1];
//        bool taken[n+1];

        for(int i = 0; i < n; i++)
            scanf("%d", ara+i);
//        memset(taken, false, sizeof(taken));

        sort(ara, ara+n);

        int kount = 1;

//        for(int i = 0; i < n; i++){
//            if(taken[i]) continue;
//            for(int j = i+1; j < n; j++){
//                if(taken[j]) continue;
//                if(ara[i] - ara[j] == 1 || ara[i] - ara[j] == -1)
//                    continue;
//                taken[j] = true;
//            }
//            kount++;
//        }

        for(int i = 1; i < n; i++){
            if(ara[i] - ara[i-1] == 1) kount = 2;
        }

        printf("%d\n", kount);
    }
}
