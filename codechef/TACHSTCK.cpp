#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int pair = 0;
    for (int i = 0; i < n - 1;) {
        if (abs(arr[i + 1] - arr[i]) <= d) {
            pair++;
            i += 2;
        }
        else
        {
            i++;
        }  
    }
    cout << pair << endl;
    return 0;
}