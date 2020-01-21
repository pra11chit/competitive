#include <iostream>
#include <cmath>
using namespace std;


void zeroes(long long int m) {
    
    long long int count = 0;

    for (int i = 5; m/i >= 1; i *= 5)
        count += floor(m/i);
    
    cout << count << endl;
}

int main() {
    long long int T;
    cin >> T;
    while (T > 0)
    {
        long long int N;
        cin >> N;
        zeroes(N);   
        T = T - 1;
    }
    
    return 0;
}