#include <bits/stdc++.h>
using namespace std;

vector<int> arr(1000000, -1);
long sum = 1;

bool is_cube_free(int n) {
    for (int i = 1; i*i*i <= n; ++i) {
        if (i > 1 && n % (i*i*i) == 0) {
            return false;
        }        
    }
    return true;
}

void solve (int t) {
    int n;
    cin >> n;
    
    if (arr[n] == 0) {
        cout << "Case " << t << ": " << "Not Cube Free\n";
    }
    else
    {
        cout << "Case " << t << ": " << arr[n] << "\n";        
    }
}

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    int t;
    cin >> t;

    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < 1000000; ++i) {
        if (is_cube_free(i)) {
            arr[i] = ++sum;
        }
        else
        {
            arr[i] = 0;
        }
        
    }

    int u = 1;
    while(u <= t) {
        solve(u);
        u++;
    }
    return 0;
}