#include <iostream>
using namespace std;

int main() {
    int test;
    scanf("%d", &test);

    while (test--) {
        int n;
        scanf ("%d", &n);

        int ara[n];
        for (int i = 0; i < n; i++) scanf("%d", ara+i);

        int onekount = 0;
        for (int i = 0; i < n; i++) if (ara[i] == 1) onekount++;

        bool firstoneencountered = false;
        bool anyone = false;

        int kount = 0, lastonepos = -1;
        for (int i = 0; i < n; i++) {
            //printf("(%lld)", i);
            if (lastonepos == -1 and ara[i] == 0) {
                kount++;
                //printf("0");
            }
            else if (lastonepos == -1 and ara[i] == 1) {
                if ((onekount & 1) and (firstoneencountered == false)) {
                    firstoneencountered = true;
                }
                else if (onekount > 1 and onekount%2 == 0){
                    kount++;
                    //printf("1");
                    lastonepos = i;
                    anyone = true;
                    firstoneencountered = true;
                }
                else if (onekount > 2 and onekount%2 == 1) {
                    kount++;
                    //printf("1");
                    lastonepos = i;
                    anyone = true;
                    firstoneencountered = true;
                }
            }
            else if (ara[i] == 1 and lastonepos != -1) {
                int zerokount = i - lastonepos - 1;
                if (zerokount & 1) zerokount--;
                kount += zerokount + 1;
                //while (zerokount--) printf("0");
                //printf("1");
                anyone = true;
                lastonepos = i;
            }
        }
        for (int j = n-1; j >= 0 and onekount and anyone; j--) {
            if (ara[j] == 0) {
                kount++;
                //printf("0");
            }
            else{
                break;
            }
        }
        printf("%d\n", kount);

        //again print the answer
        firstoneencountered = false;
        anyone = false;

        kount = 0; lastonepos = -1;
        for (int i = 0; i < n; i++) {
            //printf("(%lld)", i);
            if (lastonepos == -1 and ara[i] == 0) {
                kount++;
                printf("0 ");
            }
            else if (lastonepos == -1 and ara[i] == 1) {
                if ((onekount & 1) and (firstoneencountered == false)) {
                    firstoneencountered = true;
                }
                else if (onekount > 1 and onekount%2 == 0){
                    kount++;
                    printf("1 ");
                    lastonepos = i;
                    anyone = true;
                    firstoneencountered = true;
                }
                else if (onekount > 2 and onekount%2 == 1) {
                    kount++;
                    printf("1 ");
                    lastonepos = i;
                    anyone = true;
                    firstoneencountered = true;
                }
            }
            else if (ara[i] == 1 and lastonepos != -1) {
                int zerokount = i - lastonepos - 1;
                if (zerokount & 1) zerokount--;
                kount += zerokount + 1;
                while (zerokount--) printf("0 ");
                printf("1 ");
                anyone = true;
                lastonepos = i;
            }
        }
        for (int j = n-1; j >= 0 and onekount and anyone; j--) {
            if (ara[j] == 0) {
                kount++;
                printf("0 ");
            }
            else{
                break;
            }
        }

        printf("\n");
    }
}
