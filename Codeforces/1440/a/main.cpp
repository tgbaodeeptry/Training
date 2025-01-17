#include <bits/stdc++.h>

using namespace std;

const double pi = acos(-1.0);

#ifdef LOCAL
    #define deb(x) cout<<"LINE("<<__LINE__<<"): "<<(#x)<<" = "<<(x)<<endl; 
#else
    #define deb(...)
#endif

#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FOD(i, a, b) for (int i = a; i > b; i--)

#define push_back pb
#define mod 1000000007

typedef long int32;
typedef unsigned long uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

void solve();

//-----------------------------------------------------------------------------

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;

    while (t--) 
        solve();
}

void solve() {
    int n, c0, c1, h;
    cin >> n >> c0 >> c1 >> h;

    string s;
    cin >> s;

    int c[] = {0, 0};
    for (auto ch : s)
        c[ch - '0']++;

    if (h + c0 < c1) {
        cout << c[1]*h + n*c0 << endl;
    } else
    if (h + c1 < c0) {
        cout << c[0]*h + n*c1 << endl;
    } else
        cout << c[0]*c0 + c[1]*c1 << endl;
}
