#include<bits/stdc++.h>
using namespace std;

void calprimes(long i, vector<long int>& primes) {
    vector<bool> is_prime(32000, true);
    is_prime[0] = is_prime[1] = false;
    for (long j = 3; j <= 180; j += 2) {
        if (is_prime[j]) {
            for (long k = j * j; k <= 32000; k += j) {
                is_prime[k] = false;
            }
        }
    }

    long v = 1;
    primes[0] = 2;
    for (long u = 3; u <= 32000; u += 2) {
        if (is_prime[u] == true && u & 1) {
            primes[v] = u;
            v++;
        }
    }

}

long numofdivisor(long i) {
    vector<long int> primes(10000);
    long int nodivisors = 1;
    if (i == 1) {
        return 1;
    }
    calprimes(i, primes);
    long int k = 0;
    for (long j = primes[k]; j * j <= i; j = primes[++k]) {
        long int power = 0;
        while (i % j == 0)
        {
            power++;
            i /= j;   
        }
        nodivisors *= power + 1;
    }
    if (i != 1) {
        nodivisors *= 2;
    }

    return nodivisors;
}

int main () {
    long int a, b, n;
    cin >> a >> b >> n;
    long count = 0;
    for (long i = a; i <= b; i++) {

        if (numofdivisor(i) == n) {
            count ++;
        }
    }
    cout << count;
    return 0;
}