#include <bits/stdc++.h>
using namespace std;

void solve () {
	int n, k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; ++i){ 
		cin >> arr[i];
	}
	sort(arr, arr + n, greater<int>());
	if (k > n -k) {
	}
	else {
		k = n - k;
	}
	int sum_father = 0;
	for (int i = 0; i < k; ++i) {
		sum_father += arr[i];
	}
	int sum_child = 0;
	for (int i = k; i < n; ++i) {
		sum_child += arr[i];
	}
	cout << sum_father - sum_child << endl;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		solve();
	}
	return 0;
}
