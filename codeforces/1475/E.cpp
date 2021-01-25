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

#define maxn 1100LL ///2x10^5 + 5
//#define maxn 1000006LL ///10^6 + 6
//#define maxn 1000000009LL ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;
ll nNumbers[maxn];

ll facts[1100];

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

// ll nCk(ll nn, ll rr) {
//     if (nn == rr) return 1;
//     if (rr == 1) return nn;
//     if (rr == 0) return 1;
//     ll ret = facts[nn];
//     ret = multiply(ret, inverseMod(nn-rr));
//     ret = multiply(ret, inverseMod(rr));
//     return ret;
// }

ll nCk(ll n, ll k) {
	return multiply(facts[n], multiply(inverseMod(facts[k]), inverseMod(facts[n-k])));
}

void readArray(ll* ara, ll start, ll stopPlusOne) {
    For (i, start, stopPlusOne) {
        scl(ara[i]);
        nNumbers[ara[i]]++;
    }
}

void solve() {
    scll(n, k);
    Mem(nNumbers, 0);
    readArray(ara, 0, n);

    ll sum = 0;

    for (ll i = n; i >= 1; i--) {
        ll canGiveFromHere = nNumbers[i];
        ll req = k-sum;
        // if (req <= 0) break;
        if (req <= canGiveFromHere) {
            ans = nCk(nNumbers[i], req);
            prl(ans);
            break;
        }
        else {
            sum += canGiveFromHere;
        }
    }
}

int main() {
    facts[0] = 1;
    facts[1] = 1;
    For (i, 2, 1100) {
        facts[i] = multiply(facts[i-1], i);
    }
    test = 1;
    scl(test);
    while (test--) solve();
}
