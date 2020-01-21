#include <iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    for (int a = 1; a <= t; a++) {
        int e;
        long c;
        cin >> e >> c;
        int arr[e];
        int j;
        long sum = 0;
        for (int i = 0; i < e; ++i ) {
            cin >> j;
            arr[i] = j;
            sum += arr[i];
        }
        if (c >= sum) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}