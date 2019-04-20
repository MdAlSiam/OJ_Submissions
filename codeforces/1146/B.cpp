#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    while(cin >> x){
        int len = x.length();
        //int nona = 0;
        int s_last  = -1;

        for(int i = len-1; i >= 0; i--){
            if(x[i] == 'a'){
                s_last = i;
                break;
            }
        }



        char ara[len+10];
        int index = 0;

        int kk = s_last;
        //if(s_last == -1) kk = len;

        for(int i = 0; i <= kk; i++){
            if(x[i] != 'a'){
                ara[index++] = x[i];
            }
        }


        int pre = index, post = len - s_last - 1;
        if(s_last == -1) {pre = len; post = 0;}


        if(pre == 0  && post == 0 && s_last != -1){
            //cout << "Case 1" << endl;
            cout << x << endl;
            continue;
        }

        if(pre > post && s_last != -1){
            //cout << "Case 2" << endl;
            printf(":(\n");
            continue;
        }

        //if(s_last != -1){
        if((pre+post) & 1){
            //cout << "Case 3" << endl;
            printf(":(\n");
            continue;
        }//}

        for(int i = s_last+1; i < len; i++){
            ara[index++] = x[i];
        }

        //cout << "Index = " << index << endl;

//        for(int i = 0; i < index; i++){
//            printf(i == index-1 ? "")
//        }

        int fp = 0, sp = (index / 2) ;
        int limit = sp;

        int nai = 0;
        for(; sp < index; fp++, sp++){
            if(ara[fp] != ara[sp]){
                //cout << "Case 4" << endl;
                printf(":(\n");
                nai = 1;
                break;
            }
        }
        if(nai) continue;

        int in2 = 0;

        for(int i = 0; i < len; i++){
            if(x[i] != 'a'){
                printf("%c", x[i]);
                in2++;
            }
            else printf("a");

            if(in2 ==  limit ){
                for(int j = i+1; j < len; j++){
                    if(x[j] == 'a') printf("a");
                    else break;
                }
                printf("\n");
                break;
            }


        }

    }///eoc
}
