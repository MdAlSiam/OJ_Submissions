#include<stdio.h>
#include<string.h>

int main(){
    char str[101];
    int i,length;
    scanf(" %[^\n]",str);
    length=strlen(str);

    for(i=0;i<length;i++){
        if(str[i] >=65 && str[i]<=90) str[i]=str[i]+32;
        if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i' )
        printf(".%c",str[i]);
    }
    printf("\n");
return 0;
}
