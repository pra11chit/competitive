#include <iostream>
#include <assert.h>
using namespace std;

long long pow(int a, int p){
    long long res = 1;
    for (;p; p = p/2, a = a * a) {
        if (p&1) {
            res = res * a;
        }
    }
    return res;
}

void solve () {
    int n;
    cin >> n;
    long long value = pow(10, n);
    long long a;
    cin >> a;
    long long s;
    s = a + 2*value;
    cout << s << "\n";
    long long b = value - a;
    cout << b << "\n";
    long long c;
    cin >> c;
    long long d = value - c;
    cout << d << "\n";
    int ok;
    cin >> ok;
    assert(ok == 1);
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