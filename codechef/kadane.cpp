#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){
	int max = INT_MIN;
	for (int i = 0; i < n; ++i) {
		int sum = arr[i];
		while(sum + arr[i + 1] >= sum && i < n -1){
			sum = sum + arr[i + 1];
			i++;
		}
		if (sum > max) {
			max = sum;
		}
	}
	return max;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	int max_sum = kadane(arr, n);
	cout << max_sum;
	return 0;
}
