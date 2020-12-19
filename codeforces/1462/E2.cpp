/// In the name of Allah SWT

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
#define prYes printf("YES\n")
#define prNo printf("NO\n")
#define aNewLine printf("\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 + 5
//#define maxn 1000006 ///10^6 + 6
//#define maxn 1000000009 ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll multiply(ll num1, ll num2) {return ((num1%mod)*(num2%mod))%mod;}

ll add(ll num1, ll num2) {return ((num1%mod)+(num2%mod))%mod;}

ll bigMod(ll base, ll pow) {
    if (pow == 0) return 1;
    if (pow == 1) return base;
    if (pow & 1) {
        return multiply(bigMod(base, pow-1), base);
    }
    else {
        ll ret = bigMod(base, pow/2);
        ret = multiply(ret, ret);
        return ret;
    }
}

ll inverseMod(ll num1) {return bigMod(num1, mod-2);}

ll facts[maxn];

void precalculateFactorials(){
    facts[0] = 1;
    facts[1] = 1;
    For (i, 2, maxn+1) {
        facts[i] = multiply(i, facts[i-1]);
    }
}

ll nCk(ll num, ll kk) {
    ll ret = facts[num];
    ret = multiply(ret, inverseMod(facts[num-kk]));
    ret = multiply(ret, inverseMod(facts[kk]));
    return ret;
}

void solve() {
    cin >> n >> m >> k;
    ll freq[n+1];
    For (i, 0, n+1) freq[i] = 0;
    For (i, 1, n+1){
        scl(t);
        freq[t]++;
    }
    ll csFreq[n+1];
    csFreq[0] = 0;
    For (i, 1, n+1) csFreq[i] = csFreq[i-1]+freq[i];

    ll ways = 0;
    For (maxNum, 1, n+1) { 
        ll nLessThan = csFreq[maxNum-1]-csFreq[max(0LL, maxNum-1-k)];
        For(toInclude, 0, freq[maxNum]) {
            if (nLessThan+toInclude < m-1) continue;
            ways = add(ways, nCk(nLessThan+toInclude, m-1));
        }
    }

    cout << ways << endl;
}

int main() {
    precalculateFactorials();
    test = 1;
    scl(test);
    while (test--) solve();
}
