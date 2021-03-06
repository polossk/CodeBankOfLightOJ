// <!--encoding UTF-8 UTF-8编码--!>
/*****************************************************************************
*                      ----Stay Hungry Stay Foolish----                      *
*    @author    :   Shen                                                     *
*    @name      :   Codeforces Round #395 (Div. 2) B                         *
*****************************************************************************/

#include <bits/stdc++.h>
using namespace std;
typedef long long int64;
template<class T>inline bool updateMin(T& a, T b){ return a > b ? a = b, 1: 0; }
template<class T>inline bool updateMax(T& a, T b){ return a < b ? a = b, 1: 0; }
inline int    nextInt() { int x; scanf("%d", &x); return x; }
inline int64  nextI64() { int64  d; cin >> d; return d; }
inline char   nextChr() { scanf(" "); return getchar(); }
inline string nextStr() { string s; cin >> s; return s; }
inline double nextDbf() { double x; scanf("%lf", &x); return x; }
inline int64  nextlld() { int64 d; scanf("%lld", &d); return d; }
inline int64  next64d() { int64 d; scanf("%I64d",&d); return d; }

/*//Computational Geometry
#include <complex>
#define x real()
#define y imag()
typedef complex<double> point;
*/

int n;
vector<int> a, b;

inline bool is_Equal(const deque<int>& _a, const deque<int>& _b)
{
    for (auto ia = _a.begin(), ib = _b.begin(); ia != _a.end(); ia++, ib++)
        if (*ia != *ib) return false;
    return true;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) a.push_back(nextInt());
    b.resize(n);
    for (int i = 0; i < n - i; i++)
    {
        if (i & 1) { b[i] = a[i]; b[n - i - 1] = a[n - i - 1]; }
        else { b[i] = a[n - i - 1]; b[n - i - 1] = a[i]; }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0) { cout << b[i]; continue; }
        cout << " " << b[i];
    }
    cout << endl;
    return 0;
}