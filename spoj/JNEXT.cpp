#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];

    //taking input
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int pivot = 0;
    for (int i = n - 1; i > 0; --i) {
        if (arr[i - 1] < arr[i]) {
            pivot = i;
            break;
        }
    }
    if (pivot == 0) {
        cout << "-1\n";
        return;
    }
    //cout << pivot << endl;
    
    sort(arr + pivot, arr + n);
    // for (int i = 0; i <n; ++i) {
    //     cout << arr[i];
    // }
    // cout << "\n";
    int swap_index = 0;
    for (int i = pivot; i < n; i++) {
        if (arr[i] > arr[pivot - 1]) {
            swap_index = i;
            break;
        }
    }
    // cout << "swap_index " << swap_index << endl;

    swap(arr[pivot - 1], arr[swap_index]);

    sort(arr + pivot, arr + n);

    for (int i = 0; i <n; ++i) {
        cout << arr[i];
    }
    cout << "\n";
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