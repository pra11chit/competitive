#include <iostream>
using namespace std;

int gcd(int numer, int denom) {
    if (denom == 0) {
        return numer;
    }
    else
        return gcd(denom, numer%denom);
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        float n;
        cin >> n;
        int numer = int(n * 10000);
        int denom = 10000;
        int gcd_num = gcd(numer, denom);
        cout << denom/gcd_num << endl;
    }
    return 0;
}
