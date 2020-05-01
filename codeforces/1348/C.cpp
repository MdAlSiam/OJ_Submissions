#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){

    int test;
    scanf("%lld", &test);

    while(test--){
        int n, k, kk;

        cin >> n >> k;

        kk = k;

        string str;
        cin >> str;

        //cout << str << endl;

        int kount[26];
        int wordpresent = 0;
        for(int i = 0; i < 26; i++) kount[i] = 0;
        for(int i = 0; i < n; i++) kount[str[i]-'a']++;
        for(int i = 0; i < 26; i++) if(kount[i]) wordpresent++;

        bool distribution = false, all = false;
        int wordadded = 0;

        for(int i = 0; i < 26; i++){
            int tosub = min(kount[i], k);
            kount[i] -= tosub;
            if(kount[i] == 0 && tosub) wordpresent--;
            if(tosub) wordadded++;
            k -= tosub;

            if(k == 0){
                //printf(" ->%c %lld %lld %lld<- \n", i+'a', wordadded, wordpresent, kount[i]);
                printf("%c", i+'a');
                if(wordadded > 1) break;
                if(wordpresent == 1) distribution = true;
                else all = true;
                break;
            }
        }

        if(distribution){
            for(int i = 0; i < 26; i++){
                if(kount[i]){
                    //printf(":::%lld %lld\n", kount[i], k);
                    int toprint = kount[i] / kk;
                    if(kount[i] % kk != 0) toprint++;
                    while(toprint--) printf("%c", i+'a');
                    break;
                }
            }
        }
        else if(all){
            for(int i = 0; i < 26; i++){
                while(kount[i]--) printf("%c", i+'a');
            }
        }

        printf("\n");
    }
}
