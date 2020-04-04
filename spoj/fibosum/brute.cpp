#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
vector<int> fib(1e9 + 1, -1);

void solve() {
    int n, m;
    cin >> n >> m;
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= m; ++i) {
        if (fib[i] == -1) {
            fib[i] = (fib[i - 1] + fib[i - 2]) % M;
        }
    }
    int ans = 0;
    for (int i = n; i <= m; ++i) {
        ans = (ans + fib[i]) % M;
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
