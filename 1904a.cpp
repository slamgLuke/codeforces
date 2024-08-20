// 1904A - Forked!
#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for (int i=0;i<(n);i++)
#define fori(i,a,b) for (int i=(a);i<(b);i++)
#define dfori(i,a,b) for (int i=(a);i>=(b);i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(v) (int)v.size()
#define zero(v) memset(v,0,sizeof(v))

#define MAXINT 2147483647
#define MININT -2147483648

#define printsp(x) cout<<x<<" "
#define println(x) cout<<x<<"\n"

typedef int i32;
typedef unsigned int u32;
typedef long long i64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;

typedef pair<int,int> ii;
#define fst first
#define snd second
#define mp make_pair
typedef vector<int> vi;
#define pb push_back
#define SORT_LAMBDA(COND) [](const auto &a, const auto &b){ return COND; }

int main() {
    // freopen("input/1904a.in", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    i32 t;
    cin >> t;

    i32 a, b, xk, yk, xq, yq;
    ii c[8];
    i32 n;

    while (t--) {
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;

        if (a == b) n = 4;
        else n = 8;

        c[0] = mp(xk+a, yk+b);
        c[1] = mp(xk-a, yk+b);
        c[2] = mp(xk+a, yk-b);
        c[3] = mp(xk-a, yk-b);

        c[4] = mp(xk+b, yk+a);
        c[5] = mp(xk-b, yk+a);
        c[6] = mp(xk+b, yk-a);
        c[7] = mp(xk-b, yk-a);

        i32 result = 0;
        forn(i, n) {
            if (c[i].fst+a == xq && c[i].snd+b == yq) result++;
            else if (c[i].fst-a == xq && c[i].snd+b == yq) result++;
            else if (c[i].fst+a == xq && c[i].snd-b == yq) result++;
            else if (c[i].fst-a == xq && c[i].snd-b == yq) result++;
            else if (c[i].fst+b == xq && c[i].snd+a == yq && n == 8) result++;
            else if (c[i].fst-b == xq && c[i].snd+a == yq && n == 8) result++;
            else if (c[i].fst+b == xq && c[i].snd-a == yq && n == 8) result++;
            else if (c[i].fst-b == xq && c[i].snd-a == yq && n == 8) result++;
        }
        println(result);
    }

    return 0;
}
