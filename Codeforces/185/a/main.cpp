#include <bits/stdc++.h>
using namespace std;

#define fort(i, a, b) for (int i = a; i < b; i++)
#define ford(i, a, b) for (int i = a; i > b; i--)

using ll = long long;
using vvi = vector<vector<int>>;

void solve();

//---------------------------------------------------------------//
//                                                               //
// FB: https://facebook.com/tgbaodeeptry                         //
//                                                               //
// From Viet Nam with Love :D                                    //
//                                                               //  
//---------------------------------------------------------------//

int main() {
    #ifdef _CRUN 
        freopen("input", "r", stdin);
    #endif

    ios_base::sync_with_stdio(false); cin.tie(0);

    int t = 1;
    //cin >> t; 
    while (t--)
        solve();
}

int MOD = int(1e9) + 7;

vvi mul_matrix(vvi a, vvi b) {
    if (a.size() == 0)
        return b;

    int n = a[0].size();
    int m = a.size();
    int l = b[0].size();

    vvi ans (m, vector<int>(l, 0));

    fort (i, 0, m) 
        fort (j, 0, l) 
            fort (k, 0, n) 
                ans[i][j] = (ans[i][j] % MOD + ((a[i][k] % MOD) * 1LL * (b[k][j] % MOD)) % MOD) % MOD;

    return ans;
}

vvi pow_matrix(vvi a, ll m) {
    vvi ans = {};
    vvi x = a;

    while (m) {
        if (m & 1) {
            ans = mul_matrix(ans, x);
        }

        x = mul_matrix(x, x);
        m >>= 1;
    }

    return ans;
}

void solve() {
    ll n;
    cin >> n;

    vvi temp = {{3, 1}, {1, 3}};
    vvi base = {{1}, {0}};

    vvi ans = mul_matrix(pow_matrix(temp, n), base);

    cout << ans[0][0] << endl;
}
