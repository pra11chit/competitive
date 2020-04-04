#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

void solve() {
	int n, k;
	cin >> n >> k;
	int x;
	vector<int> pos, neg;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x < 0) {
			neg.push_back(x);
		}
		else {
			pos.push_back(x);
		}
	}
	sort(pos.begin(), pos.end(), greater<int>());
	sort(neg.begin(), neg.end());
	
	int prod = 0;
	if (neg.empty() == true) {
		for (int i = 0; i < pos.size(); ++i) {
			prod *= pos[i] % M;
		}
		cout << prod << endl;
	}
	
	if (pos.empty() == true) {
		for (int i = 0; i < neg.size() - 1; i += 2) {
			prod *= neg[i] * neg[i + 1] % M;
		}
		cout << prod << endl;
	}
	int psize = pos.size();
	int nsize = neg.size();
	int i = 0;
	int j = 0;
	int count = 0;
	for (i, j; i < psize, j < nsize - 1, count <= k;) {
		if (pos[i] >= neg[j] * neg[j + 1] && j + 1 <= nsize - 1) {
			prod *= pos[i] % M;
			count++;
			++i;
		}
		else if (pos[i] * pos[i + 1] >= neg[j] * neg[j + 1] && i + 1 <= psize -1 && j + 1 <= nsize - 1) {
			prod *= pos[i] * pos[i + 1] % M;
			i += 2;
			count += 2;
		}
		else {
			if (j + 1 <= nsize - 1) {
			prod *= neg[j] * neg[n + 1] % M;
			j += 2;
			count += 2;
			}
		}
	}
	
	if (i == psize) {
		for (; j < neg.size() - 1; j += 2) {
			prod *= neg[j] * neg[j + 1] % M;
		}
	}
	
	if (j == nsize) {
		for (int i = 0; i < pos.size(); ++i) {
			prod *= pos[i] % M;
		}
	}
	cout << prod << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
