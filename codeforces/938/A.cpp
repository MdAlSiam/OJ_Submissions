#include <bits/stdc++.h>
using namespace std;

int main(){
    char word[101]; int n;
    scanf("%d", &n);
    scanf("%s", word);
    int l = strlen(word);
    for(int i = 1; i < l; i++){
      if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y' ){
        if(word[i-1] == 'a' || word[i-1] == 'e' || word[i-1] == 'i' || word[i-1] == 'o' || word[i-1] == 'u' || word[i-1] == 'y'){
            for(int j = i; j < l; j++){
                word[j] = word[j+1];
            }
            l--;
            i = 0;
        }
      }
    }
    printf("%s\n", word);
    return 0;
}
