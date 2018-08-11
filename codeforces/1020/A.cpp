#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
    ll n, h, a, b, k;
    cin >> n >> h >> a >> b >> k;
    while(k--){
        ll dis = 0, temp;
        ll t1, f1, t2, f2;
        cin >> t1 >> f1 >> t2 >> f2;
        if(t1 == t2) {dis += abs(f1-f2); cout << dis << endl; continue;}
        if(f1 < a) {dis += (a - f1); temp = a;}
        else if(f1 > b) {dis += (f1 - b); temp = b;}
        else temp = f1;
        dis += abs(t2-t1);
        dis += abs(temp - f2);
        cout << dis << endl;
    }
}
