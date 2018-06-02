#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dd double
#define scl(x) scanf("%lld", &x)
#define scd(x) scanf("%lf", &x)
#define pi acos(-1.0)
#define pb push_back
#define Sort(x) sort(x.begin(), x.end())
#define For(i, x, y) for(ll i = x; i < y; i++)
#define pii pair < int, int >
#define ppi pair < pii, int >
#define ff first
#define ss second

int main(){
    vector <pair <ll, string> > v[100010];
    ll cn, rn, tr, ts;
    string s;

    cin >> cn >> rn;

    for(ll i = 0; i < cn; i++){
        cin >> s >> tr >> ts;
        v[tr].pb(make_pair(-ts, s));
    }

    for(ll i = 1; i <= rn; i++){
        sort(v[i].begin(), v[i].end());
        if(v[i][1].first == v[i][2].first && v[i].size() > 2){
            printf("?\n");
        }
        else cout << v[i][0].second << " " << v[i][1].second << endl;
    }
}

