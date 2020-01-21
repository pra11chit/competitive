#include <bits/stdc++.h>
using namespace std;

int tri(int n) {
    if (n < 4) {
        return 0;
    }
    if (n == 4 || n == 5) {
        return 1;
    }
    return (n - 2)/2 + tri(n - 2); 
}

void solve() {
    int n;
    cin >> n;
    cout << tri(n) << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}