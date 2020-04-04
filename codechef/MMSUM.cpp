#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<long long> vec(n);
	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	
	long long best = -1e18;
	long long current = 0;
	for (int i = 0; i < n; i++) {
		current = max(vec[i], (current + vec[i]));
		best = max(current, best);
	}
	cout << best << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
