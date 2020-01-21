#include <iostream>
using namespace std;

bool is_inc(int m1, int m2, int* arr, int l, int r) {
    if(m1 > l) {
        if (arr[m1] > arr[m1 - 1]) {
            return false;
        }
    }
    if (m2 < r) {
        if (arr[m2] < arr[m2 + 1]) {
            return false;
        }
    }
    return true;
}

bool is_dec(int m1, int m2, int* arr, int l, int r) {
    if(m1 > l) {
        if (arr[m1] < arr[m1 - 1]) {
            return false;
        }
    }
    if (m2 < r) {
        if (arr[m2] > arr[m2 + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n];
    int i;
    for (int a = 0; a < n; ++a) {
        cin >> i;
        arr[a] = i;
    }
    int l, r;
    for (int b = 1; b <= q; ++b) {
        cin >> l >> r;
        l = l - 1;
        r = r - 1;
        int count_inc = 0;
        int count_dec = 0;
        int m1 = l;
        int m2 = l;
        while (m1 < r && m2 < r)
        {
            while (arr[m2 + 1] > arr[m2] && m2 + 1 <= r)
            {
                m2++;
                if (is_inc(m1, m2, arr, l, r)) {
                    count_inc++;
                }
            }
            m1 = m2;

            while (arr[m2 + 1] < arr[m2] && m2 + 1 <= r)
            {
                m2++;
                if (is_dec(m1, m2, arr, l, r)) {
                    count_dec++;
                }
            }
            m1 = m2;
        }
        
        if (count_inc  == count_dec) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}