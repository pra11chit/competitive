#include <bits/stdc++.h>
using namespace std;

void mul(vector<vector<int>>& a, vector<vector<int>>& b) {
    int u = a[0][0]*b[0][0] + a[0][1]*b[1][0];
    int v = a[0][0]*b[0][1] + a[0][0]*b[1][1];
    int x = a[1][0]*b[0][0] + a[1][1]*b[1][0];
    int y = a[1][0]*b[0][1] + a[1][1]*b[1][1];
    a = {{u, v}, {x, y}};
}

void solve() {
    int n, m;
    cin >> n >> m;
    int p = n - 1;
    vector<vector<int>> ans = {{1, 0}, {0, 1}};
    vector<vector<int>> A = {{1, 1}, {1, 0}};
    vector<vector<int>> fin = {{1}, {0}};
    for (; p > 1; --p ) {
        mul(ans, A);
    }

    cout << ans[0][0] << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
