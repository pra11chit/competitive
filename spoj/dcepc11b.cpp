#include <bits/stdc++.h>
using namespace std;



long long powM(long a, long b, long p) {
	long long res = 1;
	for (; b; b /= 2, a=a*a % p) {
		if (b&1) {
			res = res * a % p;
		}
	}
	return res;
}

void solve() {
	long long n, p;
	cin >> n >> p;
	if(p <= n) {
		cout << 0 << endl;
		return;
	}
	long ans = p-1;
	for (long i = p - 1; i >= n + 1; --i) {
		ans = ans*powM(i, p - 2, p) % p;
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
