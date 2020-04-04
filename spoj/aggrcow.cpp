#include <bits/stdc++.h>
using namespace std;

void binary(int& i, int n, int* pos){
    int low = 0;
    int high = n - 1;
    int ans = -1;
    if(i >= pos[high]) {
        return;
    }
    while(high >= low){
        int mid = low + (high-low)/2;
        if (pos[mid] >= i) {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    i = pos[ans];
    // cout << "i in binary: " << i << endl;
}

void solve(){
    int n, c;
    scanf("%d%d", &n, &c);
    int pos[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &pos[i]);
    }

    sort(pos, pos+n);
    int low = pos[1] - pos[0];
    int high = pos[n-1] - pos[0];
    int mid, i, count;
    int ans = -1;
    while(high >= low) {
        mid = low + (high-low)/2;
        count = 1;
        i = pos[0];
        // cout << "mid is: " << mid << endl;
        // cout << "low is: " << low << endl;
        // cout << "high is: " << high << endl;
        
        while(count < c) {
            i = i + mid;
            // cout << "i before: " << i << endl;
            //search binarily the no. which is greater than
            //or equal to above i
            binary(i, n, pos);
            // cout << "value of i is: " << i << endl;
            count++;
        }

        if (i <= pos[n - 1]) {
            ans = mid;
            // cout << "ans is: " << ans;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        // cout << "mid is: " << mid << endl;
        // cout << "low is: " << low << endl;
        // cout << "high is: " << high << endl;
        // cout << "----------------------" << endl;
    }
    cout << ans << endl;
}

int main() {
    // ios::sync_with_stdio(0);
	// cin.tie(0);
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}