#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans;
ll x, y, z;

string str[16], refer, valid;

/*_________________________________________________________________________________________*/

int main(){
//freopen("output.txt", "w", stdout);
while(scl(test) == 1){
while(test--){

    scll(n, m);
    For(i, 0, n) cin >> str[i];

    bool found = false;

    for(ll i = 0; i < m; i++){

        refer = str[0];

        for(ll j = 0; j < 26; j++){

            refer[i] = j + 'a';

            //cout << "->" << refer << endl;

            bool ok = true;

            for(ll k = 0; k < n; k++){

                ll dif = 0;

                for(ll kk = 0; kk < m; kk++)
                    if(str[k][kk] != refer[kk]) dif++;

                if(dif > 1) ok = false;
            }

            if(ok){
                valid = refer;
                found = true;
                break;
            }
        }

        if(found) break;
    }

    if(found) cout << valid << endl;
    else cout << -1 << endl;
}
}}

/*******************************************************************************************/

