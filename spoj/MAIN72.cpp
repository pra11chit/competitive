#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);

    //input
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int arr_sum = 0;
    for (int i = 0; i < n; ++i) {
        arr_sum += arr[i];
    }

    //dp subset sum
    bool subset[n + 1][arr_sum + 1];
    for (int i = 0; i <= n; ++i) {
        subset[i][0] = true;
    }
    for (int i = 1; i <= arr_sum; i++) {
        subset[0][i] = false;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= arr_sum; ++j) {
            if (arr[i - 1] > j) {
                subset[i][j] = subset[i - 1][j];
            }
            if (arr[i - 1] <= j) {
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - arr[i - 1]];
            }
        }
    }

    //ans part
    int ans_sum = 0;
    for (int sum = arr_sum; sum >= 1; sum--) {
        if (subset[n][sum] == true) {
            ans_sum += sum;
        }
    }
    cout << ans_sum << endl;
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