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

bool debug = 0;

ll x, y, z = -1, maxi, mini;
ll t, test, temp;
ll n, m, k, kount, kase;
ll a, b, c, ans, u, v;

ll ara[maxn];
string str;

struct line {
    ll start;
    ll stop;

    ll cost;
};

// struct line_fwd {
//     ll start;
//     ll stop;

//     ll cost;

//     bool operator < (const line_fwd &aa) const { // arg == aa
//         if (aa.start == start) {
//             if (aa.cost == cost) {
//                 return aa.stop > stop;
//             }
//             return aa.cost < cost;
//         }
//         return aa.start < start;
//     }
// };

// struct line_back {
//     ll start;
//     ll stop;

//     ll cost;

//     bool operator < (const line_fwd &aa) const { // arg == aa
//         if (aa.stop == stop) {
//             if (aa.cost == cost) {
//                 return aa.start < start;
//             }
//             return aa.cost < cost;
//         }
//         return aa.stop > stop;
//     }
// };

// bool startcompare(line aa, line bb) {
//     if (aa.start == bb.start) {
//         if (aa.cost == bb.cost) {
//             return aa.stop > bb.stop;
//         }
//         return aa.cost < bb.cost;
//     }
//     return aa.start < bb.start;
// }

class startcompare {
public:
    bool operator()(line& aa, line& bb) {
        if (aa.start == bb.start) {
            if (aa.cost == bb.cost) {
                return aa.stop < bb.stop;
            }
            return aa.cost > bb.cost;
        }
        return aa.start > bb.start;
    }
};

// bool stopcompare (line aa, line bb) {
//     if (aa.stop == bb.stop) {
//         if (aa.cost == bb.cost) {
//             return aa.start < bb.start;
//         }
//         return aa.cost < bb.cost;
//     }
//     return aa.stop > bb.stop;
// }

class stopcompare {
public:
    bool operator()(line& aa, line& bb) {
        if (aa.stop == bb.stop) {
            if (aa.cost == bb.cost) {
                return aa.start > bb.start;
            }
            return aa.cost > bb.cost;
        }
        return aa.stop < bb.stop;
    }
};


bool isin(line outer, line inner) {
    return outer.start <= inner.start and inner.stop <= outer.stop;
}

// bool isin(line_fwd outer, line_back inner) {
//     return outer.start <= inner.start and inner.stop <= outer.stop;
// }

// bool isin(line_back outer, line_fwd inner) {
//     return outer.start <= inner.start and inner.stop <= outer.stop;
// }

// void solve() {
//     scl(n);

//     line lines1[n], lines2[n];

//     For (i, 0, n) {
//         scanf("%lld %lld %lld", &lines1[i].start, &lines1[i].stop, &lines1[i].cost);

//         lines2[i].start = lines1[i].start;
//         lines2[i].stop = lines1[i].stop;
//         lines2[i].cost = lines1[i].cost;

//         sort(lines1, lines1+i+1, startcompare);
//         sort(lines2, lines2+i+1, stopcompare);

//         db printf("Starters\n");
//         db For (dam, 0, i+1)  printf("> %lld %lld %lld\n",  lines1[dam].start, lines1[dam].stop, lines1[dam].cost);
//         db printf("Stoppers\n");
//         db For (dam, 0, i+1)  printf("> %lld %lld %lld\n",  lines2[dam].start, lines2[dam].stop, lines2[dam].cost);

//         if (lines1[0].start == lines2[0].start \
//         and lines1[0].stop == lines2[0].stop \
//         and lines1[0].cost == lines2[0].cost) {
//             prl(lines2[i].cost);
//         }
//         else if (isin(lines1[0], lines2[0])) {
//             prl(lines1[0].cost);
//         }
//         else if (isin(lines2[0], lines1[0])) {
//             prl(lines2[0].cost);
//         }
//         else if (lines1[0].stop >= lines2[0].stop) {
//             prl(lines1[0].cost);
//         }
//         else {
//             prl(lines1[0].cost+lines2[0].cost);
//         }
//     }
// } 

void solve2() {
    scl(n);

    // priority_queue<DatenWert, vector<DatenWert>, DaternWert_Compare> pq;
    // priority_queue<line_fwd> fpq;
    priority_queue<line, vector<line>, startcompare> fpq;
    priority_queue<line, vector<line>, stopcompare> bpq;
    // priority_queue<line_back> bpq;

    For (i, 0, n) {
        scanf("%lld %lld %lld", &a, &b, &c);

        // line_fwd fl;
        line fl;
        fl.start = a;
        fl.stop = b;
        fl.cost = c;

        // line_back bl;
        line bl;
        bl.start = a;
        bl.stop = b;
        bl.cost = c;     

        fpq.push(fl);
        bpq.push(bl);

        line starter = fpq.top();
        line stopper = bpq.top();

        // db printf("Starters\n");
        // db printf("> %lld %lld %lld\n", starter.start, starter.stop, starter.cost);
        // db printf("Stoppers\n");
        // db printf("> %lld %lld %lld\n",  stopper.start, stopper.stop, stopper.cost);

        if (starter.start == stopper.start \
        and starter.stop == stopper.stop \
        and starter.cost == stopper.cost) {
            prl(stopper.cost);
        }
        else if (isin(starter, stopper)) {
            prl(starter.cost);
        }
        else if (isin(stopper, starter)) {
            prl(stopper.cost);
        }
        else if (starter.stop >= stopper.stop) {
            prl(starter.cost);
        }
        else {
            prl(starter.cost+stopper.cost);
        }
    }
} 

void solve3() {
    scl(n);

    ll maxSize = 0;
    ll maxSizeCost = 0;

    ll leftmost = inf;
    ll rightmost = 10-inf;

    ll lCost = 0;
    ll rCost = 0;

    For (i, 0, n)  {
        ll l, r, cost;

        scll(l, r);
        scl(cost);

        if (r-l+1 > maxSize or (r-l+1 == maxSize and maxSizeCost > cost)) {
            maxSizeCost = cost;
            maxSize = r-l+1;    
        }

        if (l < leftmost or (l == leftmost and lCost > cost)) {
            leftmost = l;
            lCost = cost;
        }

        if (r > rightmost or (r == rightmost and rCost > cost)) {
            rCost = cost;
            rightmost = r;
        }

        ll sizeHere = rightmost-leftmost+1;

        if (sizeHere == maxSize) {
            prl(min(lCost+rCost, maxSizeCost));
            continue;
        }
        prl(lCost+rCost);
    }
}
 
int32_t main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    test = 1;
    kase = 0;
    scl(test);
    while (test--) solve3();
}