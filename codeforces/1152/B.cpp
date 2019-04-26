#include <bits/stdc++.h>
using namespace std;

bool isValid(int n){
    for(int i = 0; i < 32; i++){
        if(n == ((1 << i) - 1))
            return true;
    }
    return false;
}

int main(){
    int n;
    scanf("%d", &n);

    vector <int> ans;
    int kount = 0;

    while(1){
        if(isValid(n)) break;

        bool ebarnisi = false;

        for(int i = 0; i < 32; i++){
            if((1 << i) == n){
                n = n ^ ((1 << i) - 1);
                //cout << n << " now " << endl;
                ans.push_back(i);
                ebarnisi = true;
                kount++;
                break;
            }
        }


        ///Otherwise
        if(!ebarnisi){
        int pos;

        for(int i = 31; i >= 0; i--){
            if(   ( (n & (1 << i))) && ( n & (1 << (i-1)) ) == 0  ){
                pos = i;
                break;
            }
        }

        n = n ^ ( (1 << pos) - 1);

        //cout << n << " now2  for power " << pos << endl;

        ans.push_back(pos);
        kount++;

        n++;
        kount++;

        }

//        n++;
//        kount++;

    }

    cout << kount << endl;
    vector <int> :: iterator it;

    for(it = ans.begin(); it != ans.end(); it++){
        cout << *it << " ";
    }
}
