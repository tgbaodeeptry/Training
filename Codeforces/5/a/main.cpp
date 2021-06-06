#include <bits/stdc++.h>
using namespace std;

#define FOR(x, a, b) for (int x = a; x <= b; x++)
#define FOD(x, a, b) for (int x = a; x >= b; x--)
#define REP(x, a, b) for (int x = a; x < b; x++)
#define RED(x, a, b) for (int x = a; x > b; x--)

void solve() {
    string s;
    int a = 0;
    int res = 0;
    while (getline(cin, s)) {
        if (s[0] == '+') a++;
        else if (s[0] == '-') a--;
        else {
            string t = s.substr(s.find(':') + 1);
            res += t.length() * a;
        }
    }

    cout << res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

//    cin >> tests;
//    while (tests--) {
//        solve();
//    }

    solve();
}
