#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> vec(n);
    int ans = 0;
    for (int i=0; i<n; i++) {
        scanf("%d", &vec[i]);
        ans = (ans + vec[i]%k)%k;
    }
    printf("%d\n", ans);

}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
    return 0;
}