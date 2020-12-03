#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int kount[101];
    for (int i = 0; i <= 100; i++) {
        kount[i] = 0;
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        kount[num]++;

        if (kount[num] > ans) {
        ans = kount[num];
    }
    }

    printf("%d\n", ans);
}