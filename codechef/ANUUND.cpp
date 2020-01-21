#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        long int n;
        cin >> n;
        long int a;
        long int arr[n];
        for (long int j = 0; j < n; ++j ) {
            cin >> a;
            arr[j] = a;
        }

        for(long int k = 0; k < n; ++k) {
            if (k & 1) {
                if ((k + 1) <= n - 1 && arr[k + 1] > arr[k]) {
                    swap(arr[k], arr[k + 1]);
                }
            }

            else {
                if ((k + 1) <= n - 1 && arr[k] > arr[k + 1]) {
                    swap(arr[k], arr[k + 1]);
                }
            }
        }

        for (int l = 0; l < n; ++l) {
            cout << arr[l] << " ";
        }
        cout << endl;
    }
    return 0;
}