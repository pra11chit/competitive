//generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b) {
	return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
	srand(atoi(argv[1])); //atoi converts an array of chars to int
	int n = rand(2, 10); //no of input values
	printf("%d\n", n);
	set<int> used;
	for (int i = 0; i < n; ++i) {
		int x;
		do {
			x = rand(1, 500); //input values itself
		} while(used.count(x));
		printf("%d ", x);
		used.insert(x);
	}
	puts("");
}
