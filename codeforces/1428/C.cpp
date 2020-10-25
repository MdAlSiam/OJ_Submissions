#include <bits/stdc++.h>
using namespace std;

char str[200005];

int main() {
    int test;
    scanf("%d", &test);
    while (test--) {
        scanf(" %s", &str);
        int aKount = 0, bKount = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == 'A') {
                aKount++;
            }
            else {
                if (aKount) {
                    aKount--;
                }
                else {
                    bKount++;
                }
            }
        }
        //printf("ak = %d bk = %d\n", aKount, bKount);
        printf("%d\n", aKount + bKount%2);
    }
}