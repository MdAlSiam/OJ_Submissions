#include<stdio.h>

int main(){
    int n,count,solution=0,i;
    scanf("%d",&n);
    char str[6];

    while(n--){
        scanf(" %[^\n]",str);
        count=0;
        for(i=0;i<6;i+=2){
            if(str[i] == '1') count++;
        }
        if(count>=2) solution++;
    }
    printf("%d\n",solution);
    return 0;
}
