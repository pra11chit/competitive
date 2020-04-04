#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int i = 0;
    int count;
    int max = 0;
    
    for (;i<n; i++) {
        count = 0;
        int ans = 0;
        stack<char> sta;
        while(s[i] == '<'){
            sta.push(s[i]);
            i++;
            count++;
        }
        while(s[i] == '>' && count > 0) {
            sta.pop();
            i++;
            count--;
            ans++;
        }
        if(ans > 0) i--;
        if(ans > max) {
            max = ans;
        }
    }
    cout << max*2 << endl;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}