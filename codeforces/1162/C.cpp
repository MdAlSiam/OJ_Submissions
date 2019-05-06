#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    while(scanf("%d %d", &n, &k) == 2){

        int q[k+4];

        for(int i = 1; i <= k; i++)
            scanf("%d", &q[i]);

        int kount = 0;

        int first[n+4], last[n+4];
        memset(first, -1, sizeof(first));
        memset(last, -1, sizeof(last));

        for(int i = 1; i <= k; i++){
            if(first[q[i]] == -1)
                {first[q[i]] = i; last[q[i]] = i;}
            else last[q[i]] = i;
        }

        //for(int i = 1; i <= n; i++){
            //cout << "First[" << i << "] = " << first[i] << endl;
            //cout << "Last[" << i << "] = " << last[i] << endl;
        //}

        for(int i = 1; i <= n; i++){
            if(first[i] == -1) kount++;
        }

        //cout << "Mono " << kount << endl;

        for(int i = 1; i < n; i++){
            int p = i, q = i+1;
            if(first[p] == -1 )
                {kount++; }//cout << "Case 1 Pair " << p << " " << q << endl;}
            else if(last[q] < first[p])
                {kount++; }//cout << "Case 2 Pair " << p << " " << q << endl;}

            p = i+1, q = i;
            if(first[p] == -1 )
                {kount++; }//cout << "Case 3 Pair " << p << " " << q << endl;}
            else if(last[q] < first[p])
                {kount++; }//cout << "Case 4 Pair " << p << " " << q << endl;}
        }

        printf("%d", kount);
    }
}
