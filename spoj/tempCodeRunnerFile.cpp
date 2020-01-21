#include <iostream>
using namespace std;

void multiply(int i, int& res[]) {
    int carry = 0;
    int k = 499;
    while(k >= 0) {
        res[k] = (carry + res[k] * i) % 10;
        carry = (carry + res[k] * i) / 10;
        k--;
    }
}

void factorial(int n) {
    int res[500];
    res[499] = 1;
    for (int p = 0; p < 499; ++p) {
        res[p] = 0;
    }

    for (int i = 2; i <= n; ++i) {
        
        
        multiply(i, res);
    }

    int k = 0;
    while (res[k] == 0)
    {
        k++;
    }
    
    for (int j = k; j < 500; ++j) {
        cout << res[j];
    }
}

int main() {
    int T;
    cin >> T;
    while(T > 0) {
        int N;
        cin >> N;
        factorial(N);
    }
    return 0;
}