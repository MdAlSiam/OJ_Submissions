using namespace std;
#include <bits/stdc++.h>

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

char maze[55][55];
bool visited[55][55];

/*_________________________________________________________________________________________*/

bool nottofence(ll i, ll j){
    if(i >= 0 and i <= n-1 and j >= 0 and j <= m-1 and maze[i][j] == 'G')
        return true;
    return false;
}

void fancing(ll i, ll j){
    if(i >= 0 and i <= n-1 and j >= 0 and j <= m-1 and maze[i][j] != 'B')
        maze[i][j] = '#';
}

void dfs(ll i, ll j){

    if(i < 0 || i > n-1 || j < 0 || j > m-1 || visited[i][j] || maze[i][j] == '#' || maze[i][j] == 'B')
        return;
    visited[i][j] = true;

    dfs(i, j-1);
    dfs(i, j+1);
    dfs(i-1, j);
    dfs(i+1, j);

}

bool isValid(){

    if(maze[n-1][m-1] == 'B') return false; //{printf("Case 1\n"); return false;}

    bool nogood = true;
    For(i, 0, n){
        For(j, 0, m){
            if ((maze[i][j] == 'B')  and ( nottofence(i-1, j) or nottofence(i+1, j)
            or nottofence(i, j-1) or nottofence(i, j+1)) )
                return false;
            if(maze[i][j] == 'G') nogood = false;
        }
    }
    if(nogood) return true; // {printf("Case 2\n"); return true;}

    For(i, 0, n){
        For(j, 0, m){
            if(maze[i][j] == 'B'){
                fancing(i-1, j);
                fancing(i+1, j);
                fancing(i, j-1);
                fancing(i, j+1);
            }
        }
    }
    if(maze[n-1][m-1] == '#') return false; //{printf("Case 3\n"); return false;}

    Mem(visited, false);
    dfs(n-1, m-1);

    For(i, 0, n){
        For(j, 0, m){
            if(maze[i][j] == 'G' and !visited[i][j])
                return false; //{printf("Case 4\n"); return false;}
        }
    }

    //printf("Case 5\n");
    return true;
}

int main(){
while(scl(test) == 1){
while(test--){
    scll(n, m);
    For(i, 0, n)
        scanf(" %s", maze[i]);
//    For(i, 0, n)
//        printf("->%s\n", maze[i]);

    if(isValid()) printf("Yes\n");
    else printf("No\n");

//    For(i, 0, n)
//        printf("->%s\n", maze[i]);
}
}}

/*******************************************************************************************/

