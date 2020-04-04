#include <bits/stdc++.h>
using namespace std;

double C[1001][1001];

void solve() {
    int s, n, m, k;
    cin >> s >> n >> m >> k;
    double q = C[s - 1][m - 1];
    double p = 0.00f;
    for (int i = max(k, n - 1 + m -s); i <= max(m - 1, n - 1); ++i) {
       p += C[m - 1][i]*C[s - m][n - i - 1];
    }
    printf("%.6lf\n", p/q);
}

int main() {
    C[0][0] = 1.00f;
    for (int i = 1; i <= 1000; ++i) {
        C[i][0] = 1.00f;
        C[i][i] = 1.00f;
        for (int j = 1; j <= 1000; ++j) {
            C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
        }
    }

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
