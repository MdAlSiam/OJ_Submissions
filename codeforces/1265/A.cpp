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
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define pll pair<ll, ll> //Use space before >
#define pb push_back

ll n, m, k;
ll a, b, c, d;
ll w, x, y, z;
ll t, test, temp;

int main(){
    scl(test);
    while(test--){

        string str;
        cin >> str;

        ll len = str.length();

        if(str[0] == '?'){
            if(str[1] == 'a' || str[1] == 'b') str[0] = 'c';
            else str[0] = 'b';
        }

        for(ll i = 1; i < len-1; i++){

            if(str[i] != '?') continue;

            if(str[i-1] == 'a'){
                if(str[i+1] == '?') str[i] = 'b';
                if(str[i+1] == 'a') str[i] = 'b';
                if(str[i+1] == 'b') str[i] = 'c';
                if(str[i+1] == 'c') str[i] = 'b';
            }
            else if(str[i-1] == 'b'){
                if(str[i+1] == '?') str[i] = 'a';
                if(str[i+1] == 'a') str[i] = 'c';
                if(str[i+1] == 'b') str[i] = 'c';
                if(str[i+1] == 'c') str[i] = 'a';
            }
            else if(str[i-1] == 'c'){
                if(str[i+1] == '?') str[i] = 'b';
                if(str[i+1] == 'a') str[i] = 'b';
                if(str[i+1] == 'b') str[i] = 'a';
                if(str[i+1] == 'c') str[i] = 'b';
            }
        }//
        if(str[len-1] == '?'){
            if(str[len-2] == 'a' || str[len-2] == 'b') str[len-1] = 'c';
            else str[len-1] = 'a';
        }

        bool hobena = false;

        for(ll i = 1; i < len; i++){
            if(str[i] == str[i-1]) hobena = true;
        }
        //cout << str << endl;

        if(hobena) printf("-1\n");
        else cout << str << endl;
    }
}

