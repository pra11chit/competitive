#include <bits/stdc++.h>
using namespace std;

void psort(vector< vector<int>> &vec, int n) {
	for (int i = n - 1; i > 0; i--) {
		for (int j = n - 1; j >= n - i; j--) {
			if (vec[j][0] > vec[j - 1][0]) {
				int u = vec[j - 1][0];
				int v = vec[j - 1][1];
				int w = vec[j - 1][2];
				vec[j - 1][0] = vec[j][0];
				vec[j - 1][1] = vec[j][1];
				vec[j - 1][2] = vec[j][2];
				vec[j][0] = u;
				vec[j][1] = v;
				vec[j][2] = w;
			}
		}
	}
}

int main() {
	int n, x, y;
	cin >> n >> x >> y;
	int a[n], b[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {
		cin >> b[i];
	}
	int sum = 0;
	vector< vector<int>> vec(n, vector<int>(3, 0));
	for (int i = 0; i < n; ++i) {
		vec[i][0] = a[i] - b[i];
		vec[i][1] = a[i];
		vec[i][2] = b[i];
	}
	psort(vec, n);

	for (int i = 0; i < x; ++i) {
		sum += vec[i][1];
	}
	for (int k = x; k < n; k++) {
		sum += vec[k][2];
	}
	
	cout << sum << endl;
	return 0;
}
