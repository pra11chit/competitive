#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	vector<int> sum(n, -1);
	for (int i = 0; i < n; ++i) {
		int local_sum = arr[i];
		int mx = local_sum;
		for (int j = i + 1; j < n; ++j) {
			mx += arr[j];
			if (mx >= local_sum) {
				local_sum = mx;
			}
		}
		sum[i] = local_sum;
	}
	
	for (int i = 0; i < n; ++i) {
		cout << sum[i] << " ";
	}
	cout << endl;
	int max = sum[0];
	for (int i = 1; i < n; ++i) {
		if (sum[i] > max) {
			max = sum[i];
		}
	}
	cout << max;
	return 0;
}
