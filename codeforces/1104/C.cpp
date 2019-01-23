#include <bits/stdc++.h>
using namespace std;

int main(){
    int hor_b = 0; // 1 1
    int mid_b = 0; //1 3
    int ver_b = 0; //3 3

    int blank = 0, right_occupied = 1, low_occupied = 2;
    char horizontal_slide = '1', vertical_slide = '0';

    char x[1111];
    scanf("%s", &x);

    int len = strlen(x);

    for(int i = 0; i < len; i++){
        if(x[i] == horizontal_slide && hor_b == blank){
            printf("1 1\n");
            hor_b = right_occupied;
        }
        else if(x[i] == horizontal_slide && hor_b == right_occupied && mid_b == blank){
            printf("1 3\n");
            mid_b = right_occupied;

            hor_b = blank;
            mid_b = blank;
        }
        else if(x[i] == vertical_slide && ver_b == blank){
            printf("3 3\n");
            ver_b = low_occupied;
        }
        else if(x[i] == vertical_slide && ver_b == low_occupied && mid_b == blank){
            printf("1 3\n");
            mid_b = low_occupied;

            ver_b = blank;
            mid_b = blank;
        }
    }
}
