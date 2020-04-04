#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int pow(int a, int p) {
	int ans = 1;
	for (; p;p /= 2, a=a*a % M) {
		if(p&1) {
			ans = ans * a % M;
		}
	}
	return ans;
}

int gcd(int a, int b) {
	while(b) {
		a %= b;
		swap(a, b);
	}
	return a;
}

int main() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	vector<int> primes(vec[n - 1] + 1, 1);
	primes[0] = primes[1] = 0;
	for (int i = 2; i*i <= vec[n - 1]; ++i) {
		if (primes[i] == 1){
			for (int j = i*i; j <= vec[n - 1]; j += i) {
				primes[j] = 0;
			}
		}
	}
	
	int temp2 = vec[n - 2];
	int temp1 = vec[n - 1];
	for (int i = 2; i*i <= temp2; ++i) {
		if (primes[i] == 1) {
			while(temp2 % i == 0) {
				temp2 = temp2/i;
				temp1 = (temp1 * i) % M;
			}
		}
	}
	//if(temp2 > 0) {
		//temp2 = 1;
		//temp1= temp1 * temp2 % M;
	//}
				
	long long lcm = temp1*temp2*pow(gcd(vec[n - 1], vec[n - 2]), M - 2);
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += (lcm % M) * pow(vec[i], M - 2) % M;
	}
	cout << sum % M << endl;
	return 0;
}
