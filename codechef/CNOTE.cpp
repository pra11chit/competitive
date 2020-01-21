#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int a = 1; a <= t; a++) {
        int x, y, k, n;
        cin >> x >> y >> k >> n;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int p, c;
            cin >> p >> c;
            if (c <= k && p >= x - y) {
                found = true;
            }
        }
        cout << (found ? "LuckyChef" : "UnluckyChef");
        cout << endl;        
    }
    return 0;
}