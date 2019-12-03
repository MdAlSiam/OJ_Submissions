#include <bits/stdc++.h>
using namespace std;

int main(){int test; cin >> test; while(test--){
    int choto, boro, k;
    cin >> choto >> boro >> k;
    if(choto > boro) swap(choto, boro);
    int gcd = __gcd(choto, boro);
    int lo = boro, hi = boro*2;
    int tana = (hi-lo-2*gcd+1)/choto;
    if(choto*tana != hi-lo-2*gcd+1) tana++;
    //cout << "Tana = " << tana << endl;
    if(k <= tana) cout << "REBEL" << endl;
    else cout << "OBEY" << endl;
}}
