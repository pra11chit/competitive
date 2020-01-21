#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> penalty(n + 1, 0);
    vector<int> ac(n + 1, 0);
    for (int i = 1; i <= m; ++i) {
        int x;
        cin >> x;
        string str;
        cin >> str;
        
        if (str == "AC") {
            ac[x] = 1;
        }
        if (str == "WA" && ac[x] == 0) {
            (penalty[x])++;
        }
        
    }
    int sum_pen = 0;
    int sum_ac = 0;
    for (int i = 1; i <= n; ++i) {
        sum_ac += ac[i];
        sum_pen += penalty[i];
    }
    cout << sum_ac << " " << sum_pen << endl;
    return 0;
}