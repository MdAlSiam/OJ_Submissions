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
        scl(n);
        string str[n];
        for(ll i = 0; i < n; i++)
            cin >> str[i];

//        bool used[10];
//        memset(used, false, sizeof(used));
//        ll index = 0;
//
//        for(ll i = 0; i < n; i++)
//            used[str[i][0]-'0'] = true;

        ll kount = 0;

//        for(ll i = 0; i < n-1; i++){
//            for(ll j = i+1; j < n; j++){
//                if(str[i] == str[j]){
//                    while(used[index] == true) index++;
//                    str[j][0] = index+'0';
//                    used[index] = true;
//                    kount++;
//                }
//            }
//        }

        //+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

        for(ll i = 0; i < n; i++){

            for(ll j = i+1; j < n; j++){

                if(str[i] == str[j]){

                    kount++;

                    bool used[10];
                    memset(used, false, sizeof(used));

                    for(ll k = 0; k < n; k++){

                        //if(k == j ) continue;
                        //if(str[k][0] == str[j][0])
                            used[str[k][0]-'0'] = true;
                    }

                    for(ll k = 0; k < 10; k++){
                        //if(k == str[j][0] - '0' ) continue;
                        if(used[k] == false){
                            str[j][0] = k+'0';
                            break;
                        }

                    }
                }
            }
        }

        printf("%lld\n", kount);
        for(ll i = 0; i < n; i++)
            cout << str[i] << endl;
    }
}




