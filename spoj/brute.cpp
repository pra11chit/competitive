#include <bits/stdc++.h>
using namespace std;

void solve() {
	long n, p;
	cin >> n >> p;
	if (p <= n) {
		cout << 0;
		return;
	}
	int ans = 1;
	for (int i = 2; i <= n; ++i) {
		ans = ans * i % p;
	}
	cout << ans << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
