#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int nTest;
int tab[200005][10];
int num;
int nOps;
int ans;

int add(int num1, int num2) {
    return ((num1%mod)+(num2%mod))%mod;
}

void make_table() {
    for (int i = 0; i < 200005; i++) {
        for (int j = 0; j < 10; j++) {

            if (i == 0) {
                tab[i][j] = 1;
                continue;
            }

            if (j == 9) {
                tab[i][j] = add(tab[i-1][1], tab[i-1][0]);
            }
            else {
                tab[i][j] = tab[i-1][j+1];
            }
        }
    }
}

int main() {
    // cin >> nTest;
    scanf("%d", &nTest);

    make_table();

    while (nTest--) {
        // cin >> num >> nOps;
        scanf("%d %d", &num, &nOps);

        ans = 0;

        while (num > 0) {
            ans = add(ans, tab[nOps][num%10]);
            num /= 10;
        }

        // cout << ans << endl;
        printf("%d\n", ans);
    }
}