#include <bits/stdc++.h>
using namespace std;

int seal(int d, int i) {
	if (d % (i + 1) ==0) {
		return d/(i + 1);
	}
	else {
		return d/(i + 1) + 1;
	}
}

void solve() {
	int n, d;
	cin >> n >> d;
	if (n >= d) {
		cout << "YES" << endl;
		return;
	}
	for (int i = 1; i < n; i++) {
		if (i + seal(d, i) <= n) {
			cout << "YES" << endl;
			return;
		}
	}
	cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
