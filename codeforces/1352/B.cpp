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
ll n, m, k;
ll a, b, c;
ll x, y, z;

vector<ll> ans;
/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){
    scll(n, k);
    ans.clear();
    bool jor_diya_paisi = false;
    bool bejor_diya_paisi = false;

    ll sum = 0;

    if(n < k){
        printf("NO\n");
        continue;
    }

    for(ll i = 1; i <= k-1; i++){
        sum += 2;
        ans.pb(2);
    }

    if((n-sum) > 0 && (n-sum)%2 == 0){
        jor_diya_paisi = true;
        ans.pb(n-sum);
    }

    if(jor_diya_paisi){
        cout << "YES" << endl;
        For(i, 0, ans.size()) cout << ans[i] << " ";
        cout << endl;
        continue;
    }

    ans.clear();
    sum = 0;

    for(ll i = 1; i <= k-1; i++){
        sum += (1);
        ans.pb(1);
    }

    if((n-sum) > 0 && (n-sum)%2 == 1){
        bejor_diya_paisi = true;
        ans.pb(n-sum);
    }


    if(bejor_diya_paisi){
        cout << "YES" << endl;
        For(i, 0, ans.size()) cout << ans[i] << " ";
        cout << endl;
        continue;
    }

    printf("NO\n");

}
}}

/*******************************************************************************************/
