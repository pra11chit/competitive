//AC in first go, on cloud nine right now

#include <iostream>
using namespace std;

int main () {
    int t; 
    cin >> t;
    for (int g = 1; g <= t; ++g) {
        int n, m;
        cin >> n >> m;
        int data;
        int arr[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> data;
                arr[i][j] = data;
            }
        }

        int count = m*n;
        int l, r, u, d;
        for(int row = 1; row <= n - 2; row++) {
            for (int col = 1; col <= m - 2; col++) {
                l = 1; r = 1; u = 1; d = 1;
                while (col + l <= m - 1 && col - l >= 0 && row + d <= n - 1 && row - d >= 0)
                {
                    if (arr[row][col + r] != arr[row][col - l]) {
                        break;
                    }
                    if (arr[row + d][col] != arr[row - d][col]) {
                        break;
                    }
                    count++;
                    l++;
                    r++;
                    d++;
                    u++;
                }
            
            }

        }
        cout << count << endl;
    }
    return 0;
}