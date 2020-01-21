#include <bits/stdc++.h>
using namespace std;

void solve() {
    int p;
    cin >> p;
    int count = 0;
    for (int i = 2048; i >= 1; i = i/2) {
        while(p - i >= 0) {
            count++;
            p = p - i;
        }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){ 
        solve();
    }
    return 0;
}