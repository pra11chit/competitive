#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while(n > 0){
        int val = 1;
        while(n - val >= 0) {
            val = val*2;
        }
        n = n - val/2;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
