#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> vec(n);
    for(int i = 0; i<n; ++i) {
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    int arr[16][16];
    for (int i = 0; i < 16; i++) {
        for(int j = 0; j < 16; j++) {
            arr[i][j] = 0;
        }
    }

    string str1, str2;
    for (int i = 0; i < m; ++i ){
        cin >> str1 >> str2;
        arr[*(find(vec.begin(), vec.end(), str1))][*(find(vec.begin(), vec.end(), str2))] == 1 
    return 0;
}
