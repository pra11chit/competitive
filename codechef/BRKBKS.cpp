#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        int s, w1, w2, w3;
        cin >> s >> w1 >> w2 >> w3;
        if (w1 + w2 + w3 <= s) {
            cout << 1 << endl;
            continue;
        }
        if (w1 + w2 <= s || w2 + w3 <= s) {
            cout << 2 << endl;
            continue;
        }
        if (w1 <= s || w2 <= s || w3 <= s) {
            cout << 3 << endl;
        }
    }
    return 0;
}