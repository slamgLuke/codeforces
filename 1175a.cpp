// 1175A - From Hero to Zero
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


int main() {
    /*freopen("input/1175a.in", "r", stdin);*/
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    i32 t;
    cin >> t;
    u64 n, k;

    while (t--) {
        cin>>n>>k;
        u64 steps = 0;
        while (n > 0) {
            steps += n%k+1; 
            n /= k;
        }
        println(steps-1);
    }

    return 0;
}
