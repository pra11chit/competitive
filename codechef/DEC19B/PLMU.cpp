#include <iostream>
using namespace std;

void result(long N) {
    int arr[N];
    long long n;
    for (int i = 0; i < N; ++i) {
        cin >> n;
        arr[i] = n;
    }

    long long count_two = 0;
    long long count_zero = 0;
    for (int j = 0; j < N; ++j) {
        if (arr[j] == 2) {
            count_two++;
        }
        if (arr[j] == 0) {
            count_zero++;
        }
    }
    cout << count_zero*(count_zero - 1)/2 + count_two*(count_two - 1)/2 << endl;
}

int main () {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        long N;
        cin >> N;
        result(N);
    }
    return 0;
}