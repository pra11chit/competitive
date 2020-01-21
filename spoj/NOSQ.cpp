#include <bits/stdc++.h>
using namespace std;

vector<int> primes(100001, 1);
vector<int> is_sq_free(100001, -1);

void solve () {
    int a, b, d;
    cin >> a >> b >> d;
    for (int i = a; i <= b; ++i) {
        int temp = i;
        if (is_sq_free[i] == -1) {
            for (int j = 2; j*j <= i; ++j) {
                if (primes[j] == 1) {
                    int count = 0;
                    while (temp % j == 0) {
                        temp = temp/j;
                        count++;
                    }
                    if (count > 1) {
                            is_sq_free[i] = 0;
                            break;
                    }
                }
            }
            if (is_sq_free[i] == -1) {
                is_sq_free[i] = 1;
            }
        }
    }

    int counter = 0;
    for (int i = a; i <= b; ++i) {
        if (is_sq_free[i] == 1) {
            int temp = i;
            while (temp > 0) {
                if (temp % 10 == d) {
                    counter++;
                    break;
                }
                temp = temp/10;
            }
        }
    }

    cout << counter << endl;
}

int main() {
    primes[1] = primes[0] = 0;
    for (int i = 2; i*i <= 100000; ++i) {
        if (primes[i] == 1) {
            for (int j = i*i; j <= 100000; j += i) {
                primes[j] = 0;
            }
        }
    }

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}