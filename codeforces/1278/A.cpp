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
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll n, m;
ll a, b, c;
ll x, y, z;
ll t, test, temp;

int main(){scanf("%lld", &test); while(test--){
    char p[110], h[110], temp[110];
    scanf(" %s %s", p, h);
    ll plen = strlen(p), hlen = strlen(h);
    sort(p, p+plen);
    if(plen > hlen){printf("NO\n"); continue;}
    ll start = 0, stop = plen-1;
    bool hobena = true;
    while(stop < hlen){

        for(ll i = 0, j = start; i < plen; i++, j++){
            temp[i] = h[j];
        }
        sort(temp, temp+plen);
        bool paisi = true;
        for(ll i = 0; i < plen; i++){
            if(p[i] != temp[i]){
                paisi = false;
                break;
            }
        }
        if(paisi) {hobena = false; break;}
        start++; stop++;
    }
    if(hobena){printf("NO\n");}
    else{printf("YES\n");}
}}

