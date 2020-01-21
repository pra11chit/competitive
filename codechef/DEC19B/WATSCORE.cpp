#include <iostream>
#include <vector>
using namespace std;

void sum(int N) {
    vector<int> res(11, 0);
    int a, b;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        if (b > res[a - 1] && a < 9) {
            res[a - 1] = b;
        }
    }

    long int sum = 0;
    for (int j = 0; j < 11; ++j) {
        sum = sum + res[j];
    }
    cout << sum << endl;
}

int main() {
    int T;
    cin >> T;
    int N;
    while (cin >> N) {
        sum(N);
    }

    return 0;
}