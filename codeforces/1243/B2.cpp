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

ll n, m, a, b, c, x, y, z, t, test, temp;

int main(){
    scl(test);
    while(test--){
        scl(n);
        char a[n+2], t[n+2], a1, a2, t1, t2, kount = 0;
        scanf(" %s", a);
        scanf(" %s", t);
//        ll kk[26];
//        for(ll i = 0; i < 26; i++) kk[i] = 0;
//        for(ll i = 0; i < n; i++){
//            kk[a[i]-'a']++;
//            kk[t[i]-'a']++;
//        }
//        ll no = false;
//        for(ll i = 0; i < 26; i++){
//            if(kk[i] & 1){
//                no = true;
//                break;
//            }
//        }
//        if(no){printf("No\n"); continue;}

        vector<pair<ll, ll> > v;

        bool hoynai = false;

        for(ll i = 0; i < n; i++){

            if(a[i] == t[i]) continue;

            bool paisi = false;

            for(ll j = i+1; j < n; j++){
                if(a[j] == a[i]){
                    swap(a[j], t[i]);
                    v.push_back({j, i});
                    paisi = true;
                    break;
                }
            }

            if(paisi == false){
            for(ll j = i+1; j < n; j++){
                if(t[j] == a[i]){
                    swap(t[j], a[j]);
                    v.push_back({j, j});
                    swap(a[j], t[i]);
                    v.push_back({j, i});
                    paisi = true;
                    break;
                }
            }
            }

            if(paisi == false){
                hoynai = true;
                break;
            }

        }

        ll sz = v.size();

        if(hoynai) {printf("No\n"); continue;}

        printf("Yes\n");

        printf("%lld\n", sz);

        for(ll i = 0; i < sz; i++)
            printf("%lld %lld\n", (v[i].first)+1, (v[i].second)+1);
    }
}




