#include <bits/stdc++.h>
using namespace std;

int M = 1e9 + 7;
 
long long powM(long long b, int p){
    //base case
    if (p == 2){
        return b * b;
    }
    if (p % 2 == 1) {
        return b*powM(b, p - 1);
    }
    else
    {
        return powM(b, p/2)*pow(b, p/2);
    }  
}

void solve() {
    int n;
    cin >> n;
    vector<int> arr(2*n);
    for (int i = 0; i < 2*n; ++i) {
        cin >> arr[i];
    }

    //try to find sum of a
    int sumarr = 0;
    for (int i = 0; i < 2*n; ++i) {
        sumarr += arr[i];
    }
    if (sumarr % (n+1)) {
        cout << "0\n";
        return;
    }
    int suminit = sumarr/(n+1);

    //remove 2 occurences of suminitial from arr
    for (int i = 0; i < 2; ++i) {
        auto it = find(arr.begin(), arr.end(), suminit);
        if (it == arr.end()) {
            //suminitial doesn't exist
            cout << "0\n";
            return;
        }
        arr.erase(it);
    }

    //pairing
    sort(arr.begin(), arr.end());
    for(int i = 0, j = 2*n - 3; i < j; i++, j--) {
        if (arr[i] + arr[j] != suminit) {
            cout << "0\n";
            return;
        }
    }

    long long ans = 1;
    //no of ways to choose element from pair
    for(int i = 0, j = 2*n - 3; i < j; ++i, --j) {
        if (arr[i]  != arr[j]) {
            ans *= 2;
        }
    }

    //find no of ways to reorder pair
    // this is n!/k1!k2!....km!
    //k1 = # of pairs of type 1
    //(n-1)!
    for (int i = 1; i <= n - 1; ++i) {
        ans *= i % M;
    }
    for (int i = 0, j = 0; i < n - 1; i = j) {
        while (j< n -1 && arr[i] == arr[j]) {
            j++;
        }
        int k = j - i;
        long long b = 1;
        for (int l = 1; l <= k; l++) {
            b *= l;
        }
        ans = ans * powM(b, M - 2) % M;
    }
    
    cout << ans<< endl;

}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}