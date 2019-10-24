#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
    int q;
    scanf("%d", &q);

    while(q--){
        char str[555];
        scanf(" %s", str);
        int len = strlen(str);
        str[len] = '?';
        str[len+1] = '\0';
        //printf("%s\n", str);

        int status[26];
        for(int i = 0; i < 26; i++)
            status[i] = 0;

//        for(int i = 0; i < len; i++){
//            if(i == 0){
//                if(str[i] != str[i+1])
//                    status[str[i] - 'a'] = 1;
//            }
//            else if(i == len-1){
//                if(str[i] != str[i-1])
//                    status[str[i] - 'a'] = 1;
//            }
//            else{
//                if(str[i] != str[i-1] && str[i] != str[i+1])
//                    status[str[i] - 'a'] = 1;
//            }
//        }

        int now = 0;

        while(1){
            if(now == len) break;

            if(str[now] == str[now+1]){
                now += 2;
            }
            else{
                status[str[now]-'a'] = 1;
                now++;
            }
        }

        for(int i = 0; i < 26; i++){
            if(status[i]) printf("%c", i+97);
        }
        printf("\n");
    }
}
