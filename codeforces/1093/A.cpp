#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        for(int i = 2; i <= 7; i++){
            int temp = n;
            int kount = 0;
            bool paisi = false;

            /*if(temp % i == 0){
                cout << (temp / i) << endl;
                break;
            }*/

            for(int j = 0;;j++){
                temp -= j*i;
                if(temp < 2) break;
                if(j != 0)kount++;
                if(temp == 0){
                    cout << kount << endl;
                    paisi = true;
                    break;
                }
                if(temp % 2 == 0){
                    kount += (temp / 2);
                    cout << kount << endl;
                    paisi = true;
                    break;
                }
                if(temp % 3 == 0){
                    kount += (temp / 3);
                    cout << kount << endl;
                    paisi = true;
                    break;
                }
                if(temp % 4 == 0){
                    kount += (temp / 4);
                    cout << kount << endl;
                    paisi = true;
                    break;
                }
                if(temp % 5 == 0){
                    kount += (temp / 5);
                    cout << kount << endl;
                    paisi = true;
                    break;
                }
                if(temp % 6 == 0){
                    kount += (temp / 6);
                    cout << kount << endl;
                    paisi = true;
                    break;
                }
                if(temp % 7 == 0){
                    kount += (temp / 7);
                    cout << kount << endl;
                    paisi = true;
                    break;
                }
            }
            if(paisi) break;
        }
    }///eoc
    return 0;
}
