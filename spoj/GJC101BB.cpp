#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <=t; ++i) {
        int N, K, B, T;
        int speed[N];
        vector<int> dist[N];
        int X;
        for(int j = 0; j <= N - 1; ++j) {
            cin >> X;
            dist[j][0] = X;
        }
        int vel;
        for (int k = 0; k <= N; ++k) {
            cin >> vel;
            speed[k] = vel;
        }
        
        
    }
    return 0;
}