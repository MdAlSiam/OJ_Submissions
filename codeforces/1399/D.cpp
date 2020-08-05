using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prys printf("YES\n")
#define prno printf("NO\n")

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
ll n, m, k, kount, kk;
ll a, b, c, ans, team_assigned;
ll x, y, z = -1, zp, op, team[maxn];

string str;
vector<ll> zeropos, onepos;

/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    scl(n);
    cin >> str;

    zeropos.clear();
    onepos.clear();

    For(i, 0, n){
        if(str[i] == '0') zeropos.pb(i);
        else onepos.pb(i);
    }

    zp = op = 0;

    Mem(team, -1);

    team_assigned = 0;

    For(i, 0, n){

        if(team[i] == -1) team[i] = ++team_assigned;

        if(str[i] == '0'){
            if(zp < zeropos.size() and zeropos[zp] == i) zp++;
            if(op < onepos.size()) team[onepos[op]] = team[i];
            op++;
        }
        if(str[i] == '1'){
            if(op < onepos.size() and onepos[op] == i) op++;
            if(zp < zeropos.size()) team[zeropos[zp]] = team[i];
            zp++;
        }
    }

    prl(team_assigned);
    For(i, 0, n) printf("%lld ", team[i]);
    cout << endl;
}
}}

/*******************************************************************************************/

