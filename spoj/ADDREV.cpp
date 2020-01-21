#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int reverse(int b) {
    vector<int> num_vec;
    while(b != 0) {
        num_vec.push_back(b % 10);
        b = (b - (b%10))/10;
    }

    int number = 0;
    for(int i = num_vec.size() - 1; i >= 0 ; --i) {
        number += pow(10, num_vec.size() - i - 1) * num_vec[i];
    }
    
    return number;
}

void add(int m, int n) {
    cout << reverse( reverse(m) + reverse(n)) << endl;
}

int main() {
    int T;
    cin >> T;
    for (int a = T; a > 0; --a) {
        int M, N;
        cin >> M >> N;
        add(M, N);
    }
    return 0;
}