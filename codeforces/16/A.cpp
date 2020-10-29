#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char str[m+10], prev[m+10];

    bool no = false;

    for (int i = 0; i < n; i++) {
        scanf(" %s", str);

        for (int i = 0; i < m; i++) {
            if (i != 0 and str[i] != str[i-1]) {
                no = true;
            }
        }

        if (i != 0 and str[0] == prev[0]) {
            no = true;
        }

        prev[0] = str[0];
    }

    if (no) printf("NO\n");
    else printf("YES\n");
}