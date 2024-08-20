// 1808A - Lucky Numbers
#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for (int i=0;i<(n);i++)
#define fori(i,a,b) for (int i=(a);i<(b);i++)
#define dfori(i,a,b) for (int i=(a);i>=(b);i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(v) (int)v.size()
#define zero(v) memset(v,0,sizeof(v))

#define MAX(A,B) ((A)>(B)?(A):(B))
#define MIN(A,B) ((A)<(B)?(A):(B))
#define XSWAP(A,B) (A)^= (B);(B)^=(A);(A)^=(B)
#define ABS(A)  ((A)<(0)?(-A):(A))
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

i32 get_luck(const string& num) {
    i32 min = 9;
    i32 max = 0;
    forall(it,num) {
        min = MIN(min, *it - '0');
        max = MAX(max, *it - '0');
    }
    return max - min;
}

i32 main() {
    /*freopen("input/1808a.in", "r", stdin);*/
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    i32 t;
    cin >> t;

    while (t--) {
        i32 l, r, luck=MININT, lucky;
        cin >> l >> r;

        for (i32 i = l; i < l+100 && i <= r; i++) {
            string str = to_string(i);
            i32 current_luck = get_luck(str);
            if (current_luck > luck) {
                luck = current_luck;
                lucky = i;
                if (luck == 9) break;
            } 
        }

        println(lucky);
    }

    return 0;
}
