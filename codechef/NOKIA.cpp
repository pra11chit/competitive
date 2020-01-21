#include <bits/stdc++.h>
using namespace std;

int min(int n) {
    if (n < 1) {
        return 0;
    }
    if (n == 1) {
        return 2;
    }
    return n + 1 + min(n/2) + min(n - 1 - n/2);
}

void solve () {
    int n, m;
    cin >> n >> m;
    int max_no = n * (n + 3)/2;
    int min_no = min(n); 
    
    if (m >= min_no) {
        if (m > max_no) {
        cout << m - max_no << endl;
        return;
        }
        cout << "0\n";
    }
    
    else cout << "-1\n";
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}