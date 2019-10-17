//#include <bits/stdc++.h>
//using namespace std;
//
//#define ll long long int
//
//ll n, m, p, q, i, test;
//
//int main(){
//
//}

#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll n, m, p, q, i, test;

int main(){

    scanf("%lld", &test);

    while(test--){

        scanf("%lld %lld %lld", &p, &m, &q);

        int aa = p, bb = m, cc = q;

        ll ans1 = 0, ans2 = 0;



            while(p >= 1 & m >= 2){
                p -= 1;
                m -= 2;
                ans1 += 3;
            }

            while(m >= 1 & q >= 2){
                m -= 1;
                q -= 2;
                ans1 += 3;
            }

            p = aa; m = bb; q = cc;

            while(m >= 1 & q >= 2){
                m -= 1;
                q -= 2;
                ans2 += 3;
            }
            while(p >= 1 & m >= 2){
                p -= 1;
                m -= 2;
                ans2 += 3;
            }

        printf("%lld\n", max(ans1, ans2));
    }
}

