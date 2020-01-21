#include <bits/stdc++.h>
using namespace std;

void solve() {
	long long a, b;
	int m;
	cin >> a >> b >> m;
	if ( m > a || m > b) {
		cout << a + b;
		return;
	}
	else {
		for (int i = m; i > 0; --i) {
			if (i <= a && i <= b) {
				a = a - i;
				b = b - i;
			}
		}
	}
	cout << a + b << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
