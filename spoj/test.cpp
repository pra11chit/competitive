#include <iostream>
using namespace std;

long long powM(long a, long b, long M) {
	long long res = 1;
	for (; b; b /= 2, a=a*a % M) {
		if (b&1) {
			res = res * a % M;
		}
	}
	return res;
}

int main() {
    int n;
    cout << "enter the no.";
    cin >> n;
    cout << n + 1;
    cout << endl;
    cout << powM(5, 5, 7);
    return 0;
}
