#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        string str;
        cin >> str;

        string str_sorted = str;
        sort(str_sorted.begin(), str_sorted.end());

        //cout << str_sorted << endl;

        string ans = "";

        int pnt = 0;

        for(int i = 0; i < n; i++){
            if(str[i] == str_sorted[pnt]){
                ans += "1";
                pnt++;
            }
            else ans += "2";
        }

        bool dash = false;
        char prev = '0';
        for(int i = 0; i < n; i++){
            if(ans[i] == '2' && str[i] >= prev){
                prev = str[i];
            }
            else if(ans[i] == '2') dash = true;
        }

        if(dash) cout << "-" << endl;
        else cout << ans << endl;

    }
}
