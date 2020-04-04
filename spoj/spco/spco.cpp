#include <bits/stdc++.h>
using namespace std;

const int max_n = 64;
vector<bool> primes(max_n + 1, true);

void solve() {
    long  a, b;
    cin >> a >> b;
    long long ans = 0;
    for (long long i = a; i <= b; ++i) {
        if (primes[__builtin_popcount(i)] == true) {
            ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    
    primes[0] = primes[1] = false;
    for (int i = 0; i*i <= max_n; ++i) {
        if (primes[i] == true) {
            for (int j = i*i; j <= max_n; j += i) {
                primes[j] = false;
            }
        }
    }
    
    while(t--) {
        solve();
    }
}
    
