#include <bits/stdc++.h>

using namespace std;

typedef struct{
    int price;
    int quality;
} laptop;

bool compare(laptop a, laptop b){
    return a.price < b.price;
}

int main(){
    int n;
    scanf("%d", &n);

    laptop hp[n+1];

    for(int i = 0; i < n; i++){
        scanf("%d %d", &hp[i].price, &hp[i].quality);
    }

    sort(hp, hp+n, compare);

    bool alexhappy = 0;

    for(int i = 1; i < n; i++){
        if(hp[i].quality < hp[i-1].quality){
            alexhappy = 1;
            break;
        }
    }
    if(alexhappy) printf("Happy Alex\n");
    else printf("Poor Alex\n");
}
