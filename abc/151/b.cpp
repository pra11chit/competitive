#include <iostream>
using namespace std;

int main () {
    int n, k, m;
    cin >> n >> k >> m;
    int arr[n - 1];
    int sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    int ans = m*n - sum;
    if (ans >= 0 && ans <= k) {
        cout << ans;
    }
    if (ans <  0){
        cout << 0;
    }
    if (ans > k) {
        cout << -1;
    }    
    return 0;
}