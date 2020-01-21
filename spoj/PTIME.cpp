#include <bits/stdc++.h>
using namespace std;

vector<int> primes(10001, 0);

int main( ){
    //finding primes upto 10000
    primes[0] = primes[1] = -1;
    for (int i = 2; i*i <= 10000; ++i) {
        if (primes[i] == 0) {
            for (int j = i*i; j <= 10000; j += i) {
                primes[j] = -1;
            }
        }
    }
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i){
        int temp = i;
        for (int j = 2; j*j <= 10000; ++j) {
            if (primes[j] != -1) {
                while (temp % j == 0) {
                    (primes[j])++;
                    temp = temp/j;
                }
            }
        }
        if (temp > 1) {
            (primes[temp])++;
        }
    }
    int count = 0;
    for (int i = 2; i <= 10000; ++i) {
        if (primes[i] > 0 && count == 0) {
            count++;
            cout << i <<"^" << primes[i];
            continue;
        }
        if (primes[i] > 0 && count != 0) {
            cout << " * " << i <<"^" << primes[i];
        }
    }
    return 0;
}