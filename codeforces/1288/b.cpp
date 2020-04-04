#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	if (b < a) {
		cout << 0 << endl;;
		return;
	}
	if (b == a) {
		cout << 1 << endl;
		return;
	}
	
	while(b % 10 != 9) {
		b--;
	}
	while(a % 10 != 9) {
		a++;
	}
	cout << (b - a)/10 + 1 << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
