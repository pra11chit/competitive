#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cstdlib>
using namespace std;
 
#define s(T) scanf("%d", &T)
#define sl(T) scanf("%lld", &T)
#define fill(a, val) memset(a, val, sizeof(a))
#define mp make_pair
#define pb push_back
#define all(x) x.begin(), x.end()
#define DREP(x) sort(all(x)); x.erase(unique(all(x)), x.end())
#define INDEX(a, val) (lower_bound(all(a), val) - a.begin())
 
const int maxS = 1000;
 
int totalCases, testNum;
int S, N, M, K;
double Comb[maxS + 1][maxS + 1];
 
void preprocess()
{
	fill(Comb, 0);
	for(int i = 0; i <= maxS; i++)
	{	
		Comb[i][0] = Comb[i][i] = 1.0;
		for(int j = 1; j <i; j++)
			Comb[i][j] = Comb[i-1][j] + Comb[i-1][j-1];
	}
}
 
bool input()
{
	s(S); assert (1 <= S && S <= 1000);
	s(N); assert (1 <= N && N <= S);
	s(M); assert (1 <= M && M <= S);
	s(K); assert (0 <= K && K <  M);
	return true;
}
 
void solve()
{
	double num = 0, den = Comb[S-1][N-1];
	for(int k = max(K, N-1 + M-S); k <= min(N-1, M-1); k++)
		num += Comb[M-1][k] * Comb[S-M][N-1-k];
	printf("%.6lf\n", num/den);
}
 
int main()
{
	preprocess();
	s(totalCases); assert(totalCases <= 100);
	for(testNum = 1; testNum <= totalCases; testNum++)
	{
		if( !input())
			break;
		solve();
	}
}
 