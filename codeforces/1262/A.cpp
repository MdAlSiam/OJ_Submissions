#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)
#define pb push_back
#define ff first
#define ss second

#define maxn 100005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll n, m, a, b, c, x, y, z, t, test, temp;


int main(){

    //cout << "Test run\n";

    scanf("%lld", &test );
    while(test--){

        scanf("%lld", &n);

        ll f[maxn], l[maxn];

        ll mini = LONG_LONG_MAX, maxi = -1;

        for(ll i = 0; i < n; i++){
            scanf("%lld %lld", f+i, l+i);
            //beg[f[i]]++;
            //endd[l[i]]++;
//            mini = min(f[i], mini);
//            mini = min(l[i], mini);
//            maxi = max(f[i], maxi);
//            maxi = max(l[i], maxi);
        }
//        ll beg[maxi-mini+4], endd[maxi-mini+4];
//        memset(beg, 0, sizeof(beg));
//        memset(endd, 0, sizeof(endd));
//        for(ll i = 0; i < n; i++){
//            beg[ f[i] - mini ]++;
//            endd[ l[i] - mini ]++;
//        }
//
//        for(ll i = 1; i <= maxi-mini; i++)
//            beg[i] += beg[i-1];
//        for(ll i = maxi-mini-1; i >= 0; i--){
//            endd[i] += endd[i+1];
//        }
//
//        ll shesh;
//        for(ll i = 0; i <= maxi-mini; i++){
//            if(beg[i] == n){
//                shesh = i+mini;
//                break;
//            }
//        }
//        ll shuru;
//        for(ll i = maxi-mini; i >= 0; i--){
//            if(endd[i] == n){
//                shuru = i+mini;
//                break;
//            }
//        }

        ll shesh, shuru;
        sort(f, f+n);
        sort(l, l+n);
        shesh = f[n-1];
        shuru = l[0];

        if(n == 1) printf("0\n");
        else if(shesh < shuru) printf("0\n");
        else printf("%lld\n", shesh-shuru);
    }
}
