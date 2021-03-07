#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    while (test--) {
        string str;
        cin >> str;

        char firstCharacter, secondCharacter, thirdCharacter;
        firstCharacter = str[0];
        if (firstCharacter == 'A') {
            secondCharacter = 'B';
            thirdCharacter = 'C';
        }
        else if (firstCharacter == 'B') {
            secondCharacter = 'C';
            thirdCharacter = 'A';
        }
        else {
            secondCharacter = 'A';
            thirdCharacter = 'B';
        }

        bool Yes = false;

        int status;

        // Case 2 - ( and )
        status = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == firstCharacter or str[i] == secondCharacter)  status++;
            else status--;

            if (status < 0) {status = -69; break;}
        }
        if (status == 0) Yes = true; // {Yes = true; printf("(2-%d)", status);}

        // Case 3 - ) and (
        status = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == firstCharacter or str[i] == thirdCharacter) status++;
            else status--;

            if (status < 0) {status = -69; break;}
        }
        if (status == 0) Yes = true; // {Yes = true; printf("(3-%d)", status);}

        // Case 4 - ) and )
        status = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == firstCharacter) status++;
            else status--;

            if (status < 0) {status = -69; break;}
        }
        if (status == 0) Yes = true; // {Yes = true; printf("(4-%d)", status);}

        // Case 1 - ( and ( - not possible
        status = 0;
        for (int i = 0; i < str.length(); i++) {
            status++;
        }

        if (Yes) printf("YES\n");
        else printf("NO\n");
    }
}