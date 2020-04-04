#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int count = 0;
	int small = 2*(1e5) + 1;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (arr[i] < small) {
			small = arr[i];
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
