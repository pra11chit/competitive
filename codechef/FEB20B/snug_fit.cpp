#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    scanf("%d", &n);
    vector<int> veca(n), vecb(n);
    for (int i=0; i<n; i++) {
        scanf("%d", &veca[i]);
    }
    for (int i=0; i<n; i++) {
        scanf("%d", &vecb[i]);
    }

    sort(veca.begin(), veca.end(), greater<int>());
    sort(vecb.begin(), vecb.end(), greater<int>());
    long long ans = 0;
    for (int i=0; i<n; i++){
        if (veca[i]>=vecb[i]){
            ans += vecb[i];
        }
        else{
            ans += veca[i];
        }
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}