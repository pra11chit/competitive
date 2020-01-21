#include <bits/stdc++.h>
using namespace std;

long add(int inp[5][5], int a, int b, int c, int d, int e) {
    return (inp[a][b] + inp[c][d] + inp[b][a] + inp[d][c] + inp[b][c] + inp[c][b] + inp[d][e] + inp[e][d] + inp[d][c] + inp[c][d] + inp[d][e] + inp[e][d]);
}

int main() {
    int inp[5][5];
    int temp;
    for (int i = 0; i <= 4; ++i) {
        for (int j = 0; j <= 4; ++j) {
            cin >> temp;
            inp[i][j] = temp;
        }
    }
    long max = 0;
    long sum = 0;
    for (int a = 0; a <= 4; ++a) {
        for (int b = 0; b <= 4; ++b) {
            if (b == a) continue;
            for (int c = 0; c <= 4; ++c) {
                if (c==b || c==a) continue;
                for (int d = 0; d <= 4; ++d) {
                    if (d==c || d==b || d==a) continue;
                    for (int e = 0; e <= 4; ++e) {
                        if (e==a || e==b || e==c || e==d) continue;
                        sum = add(inp, a, b, c, d, e);
                        if (sum > max) {
                            max = sum;
                        }
                    }
                }
            }
        }
    }
    cout << max;
    return 0;
}