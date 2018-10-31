#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;
        scanf("%d", &n);

        char s[n+5], t[n+5];
        scanf("%s", &s);
        scanf("%s", &t);

        int kount = 0, ansara[10099], index = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == t[i]) continue;

            char target = t[i];
            int targetposition = -9;

            for(int xx = i+1; xx < n; xx++){
                if(s[xx] == target){
                    targetposition = xx;
                    break;
                }
            }

            if(targetposition == -9) {
                printf("-1\n");
                return 0;
            }

            for(int pp = targetposition; pp > i ; pp--){
                swap(s[pp], s[pp-1]);
                kount++;
                ansara[index++] = pp;
            }
        }

        printf("%d\n", index);
        for(int yy = 0; yy < index; yy++)
            printf("%d ", ansara[yy]);
        printf("\n");

    return 0;
}
