#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    ll mini = 1, curr_pos;
    ll maxi, moves_to_do, dis_to_go, curr_need;

    while(scanf("%lld %lld %lld", &maxi, &moves_to_do, &dis_to_go ) == 3){
        ll ansara[moves_to_do+4], index = 0;
        curr_pos = 1;

        if(((maxi - mini)*moves_to_do) < dis_to_go){
            printf("NO\n");
            continue;
        }

        if(moves_to_do > dis_to_go){
            printf("NO\n");
            continue;
        }

        while(moves_to_do > 0){
            curr_need  =  dis_to_go / moves_to_do;
            if(curr_need*moves_to_do != dis_to_go) curr_need++;
            if(curr_pos + curr_need <= maxi) curr_pos += curr_need;
            else if(curr_pos - curr_need >= mini) curr_pos -= curr_need;
            ansara[index++] = curr_pos;
            moves_to_do--;
            dis_to_go -= curr_need;
        }
        printf("YES\n");
        for(int i = 0; i < index; i++)
            printf("%d ", ansara[i]);
        printf("\n");
        /*printf("Checker:\n");
        ll sum = 0;
        for(int i = 0; i < index; i++){
            if(i == 0) sum += abs(ansara[i] - 1);
            else sum += abs(ansara[i] - ansara[i-1]);
        }
        printf("Sum = %d\n", sum);*/
    }
}
