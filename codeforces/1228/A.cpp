#include <bits/stdc++.h>
using namespace std;

int main(){
    int lo, hi;
    scanf("%d %d", &lo, &hi);

    int ans = -1;

    for(int i = lo; i <= hi; i++){
        int curr = i;
        int letter[10];
        for(int j = 0; j < 10; j++) letter[j] = 0;
        while(curr != 0){
            int dig = curr % 10;
            letter[dig]++;
            curr/=10;
        }
        //cout << "i = " << i << endl;
        bool hobena = false;
        for(int j = 0; j < 10; j++){
            //cout << j << " " << letter[j] << endl;
            if(letter[j] > 1){
                hobena = true;
                break;
            }
        }
        if(hobena) continue;
        ans = i;
        break;
    }

    printf("%d\n", ans);
}
