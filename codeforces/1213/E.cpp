#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string in1, in2;
    getchar();
    cin >> in1;
    getchar();
    cin >> in2;

    string abc = "abc";
    vector <string> v;

    do{
        string curr;
        for(int i = 0; i < n; i++) curr += abc;
        v.push_back(curr);
        string curr2 = "";
        for(int i = 0; i < n; i++) curr2 += abc[0];
        for(int i = 0; i < n; i++) curr2 += abc[1];
        for(int i = 0; i < n; i++) curr2 += abc[2];
        v.push_back(curr2);
        //v.push_back(n, curr[0] + n, curr[1] + n, curr[2]);
    }while(next_permutation(abc.begin(), abc.end()));

    //vector <string> ::iterator it;
    int sz = v.size();
    for(int it = 0; it < sz; it++){
        //string str = v[it];
        if(v[it].find(in1) == string::npos && v[it].find(in2) == string::npos){
            cout << "YES" << endl;
            cout << v[it] << endl;
            return 0;
        }

    }

    cout << "NO" << endl;
}
