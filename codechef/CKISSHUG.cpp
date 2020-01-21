#include <bits/stdc++.h>
using namespace std;

int M = 1e9 + 7;

int pow(int a, int p) {
    int ans = 1;
    for (; p; p = p/2, a = a*a % M) {
        if (p & 1) {
            ans = ans * a % M;
        }
    }
    return ans;
} 

void solve() {
    int n;
    cin >> n;
    int sum = 1;
    for (int i = n; i > 0; --i) {
        if (i&1) {
            sum += pow(2, i - (i-1)/2 - 1);
        }
        else
        {
            sum += pow(2, i - i/2); 
        }
    }
    cout << sum % M << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}