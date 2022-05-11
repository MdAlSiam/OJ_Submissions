/// In the name of Allah SWT

using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define scd(x)              scanf("%lf", &x)
#define scdd(x, y)          scanf("%lf %lf", &x, &y)
#define db                  if (debug)

#define prl(x)              printf("%lld\n", x)
#define prll(x, y)          printf("%lld %lld\n", x, y)
#define prYes               printf("YES\n")
#define prNo                printf("NO\n")
#define aNewLine            printf("\n")

#define ON(n, i)            (n|(1LL<<i))
#define OFF(n, i)           (n&(~(1LL<<i)))
#define CHK(n, i)           (n&(1LL<<i))

#define For(i, x, y)        for(ll i = x; i < y; i++)
#define Mem(ara, x)         memset(ara, x, sizeof(ara))

#define pb                  push_back
#define pll                 pair<ll, ll >
#define ff                  first
#define ss                  second

#define pi                  acos(-1.00)
#define eps                 0.0000000001 ///10^-10
#define inf                 LONG_LONG_MAX
#define mod                 1000000007LL ///10^9+7
#define maxn                200005LL ///2x10^5 + 5

bool debug = false;

ll x, y, z = -1, maxi, mini, xx, yy, zz;
ll t, test, temp;
ll n, m, k, kount, kase, total, sum;
ll a, b, c, d, ans, ansHere, u, v;
ll lo, hi, mid, start, stop;
string str;
bool yes;
// ll ara[maxn];
vector<ll> vc;

void solve() {
    scll(n, m);

    ll grid[n][m];
    ll grid1[n][m];
    ll grid2[n][m];

    For (i, 0, n) {
        For (j, 0, m) {
            scl(t);

            grid[i][j] = t;
            grid1[i][j] = t;
            grid2[i][j] = t;
        }
    }

    // grid1 - upper row
    For (col, 0, m) {
        ll r = 0;
        c = col;

        while (true) {
            r++;
            c++;

            if (r >= 0 and r < n and c >= 0 and c < m) {
                grid1[0][col] += grid1[r][c];
            }
            else {
                break;
            }
        }
    }

    // grid1 - left column

    For (ro, 1, n) {
        ll r = ro;
        c = 0;

        while (true) {
            r++;
            c++;

            if (r >= 0 and r < n and c >= 0 and c < m) {
                grid1[ro][0] += grid1[r][c];
            }
            else {
                break;
            }
        }
    }

    // --------------- ------------------

    // grid2 - upper row
    For (col, 0, m) {
        ll r = 0;
        c = col;

        while (true) {
            r++;
            c--;

            if (r >= 0 and r < n and c >= 0 and c < m) {
                grid2[0][col] += grid2[r][c];
            }
            else {
                break;
            }
        }
    }

    // grid2 - right column

    For (ro, 1, n) {
        ll r = ro;
        c = m-1;

        while (true) {
            r++;
            c--;

            if (r >= 0 and r < n and c >= 0 and c < m) {
                grid2[ro][m-1] += grid2[r][c];
            }
            else {
                break;
            }
        }
    }

    // For (i, 0, n) {
    //     For (j, 0, m) {
    //         printf("%lld | ", grid1[i][j]);
    //     }
    //     aNewLine;
    // }

    // For (i, 0, n) {
    //     For (j, 0, m) {
    //         printf("%lld - ", grid2[i][j]);
    //     }
    //     aNewLine;
    // }

    ans = 0;

    For (i, 0, n) {
        For (j, 0, m) {
            ansHere = 0;

            ll ro = i - min(i, j);
            ll col = j - min(i, j);

            ansHere += grid1[ro][col];

            ro = i - min(i, m-1-j);
            col = j + min(i, m-1-j);

            ansHere += grid2[ro][col];

            ansHere -= grid[i][j];

            ans = max(ans, ansHere);
        }
    }

    prl(ans);

}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve();
}

/*
    0. Clear your head, leave all the messed up things of messed up life aside, be cool
    1. Statements and Limits
    2. Examples Simulation
    3. Solution Idea
    4. Genralisation; Checking with Examples and Scratch Cases; Corner Cases
    5. Coding the Idea Consciously
*/

/*

(0,0)  (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7) (0,8) (0,9) 

(1,0)  (1,1) (1,2) (1,3) (1,4) (1,5) (1,6) (1,7) (1,8) (1,9) 
(2,0)  (2,1) (2,2) (2,3) (2,4) (2,5) (2,6) (2,7) (2,8) (2,9) 
(3,0)  (3,1) (3,2) (3,3) (3,4) (3,5) (3,6) (3,7) (3,8) (3,9) 
(4,0)  (4,1) (4,2) (4,3) (4,4) (4,5) (4,6) (4,7) (4,8) (4,9) 
(5,0)  (5,1) (5,2) (5,3) (5,4) (5,5) (5,6) (5,7) (5,8) (5,9) 
(6,0)  (6,1) (6,2) (6,3) (6,4) (6,5) (6,6) (6,7) (6,8) (6,9) 
(7,0)  (7,1) (7,2) (7,3) (7,4) (7,5) (7,6) (7,7) (7,8) (7,9) 
(8,0)  (8,1) (8,2) (8,3) (8,4) (8,5) (8,6) (8,7) (8,8) (8,9) 
(9,0)  (9,1) (9,2) (9,3) (9,4) (9,5) (9,6) (9,7) (9,8) (9,9) 

// -------------- ------------------

(0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6)  (0,7) (0,8)  (0,9) 

(1,0) (1,1) (1,2) (1,3) (1,4) (1,5) (1,6)  (1,7) (1,8)  (1,9) 
(2,0) (2,1) (2,2) (2,3) (2,4) (2,5) (2,6)  (2,7) (2,8)  (2,9) 
(3,0) (3,1) (3,2) (3,3) (3,4) (3,5) (3,6)  (3,7) (3,8)  (3,9) 
(4,0) (4,1) (4,2) (4,3) (4,4) (4,5) (4,6)  (4,7) (4,8)  (4,9) 
(5,0) (5,1) (5,2) (5,3) (5,4) (5,5) (5,6)  (5,7) (5,8)  (5,9) 
(6,0) (6,1) (6,2) (6,3) (6,4) (6,5) (6,6)  (6,7) (6,8)  (6,9) 
(7,0) (7,1) (7,2) (7,3) (7,4) (7,5) (7,6)  (7,7) (7,8)  (7,9) 
(8,0) (8,1) (8,2) (8,3) (8,4) (8,5) (8,6)  (8,7) (8,8)  (8,9) 
(9,0) (9,1) (9,2) (9,3) (9,4) (9,5) (9,6)  (9,7) (9,8)  (9,9) 

*/