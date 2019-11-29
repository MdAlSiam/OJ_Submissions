#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dd double
#define ull unsigned long long int //%llu as format specifier

#define pi acos(-1)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 100000008 ///10^8
//#define maxn 1000000009 ///10^9

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scd(x, y) scanf("%lf %lf", &x, &y)

ll n, m, k;
ll a, b, c, d;
ll w, x, y, z;
ll t, test, temp;

int main(){
    scl(test);
    while(test--){
        ll ara[3];
        for(ll i = 0; i < 3; i++)
            scl(ara[i]);

        sort(ara, ara+3);

        if(ara[0]+ara[1] <= ara[2])
            cout << ara[0]+ara[1] << endl;
        else cout << (ara[0]+ara[1]+ara[2]) / 2 << endl;
    }
}




