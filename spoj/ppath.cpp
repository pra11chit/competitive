// 1. find primes between a range
// declare all the nos in range as primes
// find primes upto sqrt(b)
// with the help of this primes, remove all the composites
// 2. start from digit at highest place value, iterate over all no greater than
// that digit, if yes make the jump else move to next highest place value
// add each to set or vector
#include <bits/stdc++.h>
using namespace std;
bool check(int x, int y) {
    int diff = 0;
    while(y) {
        if(y%10 != x%10) {
            diff++;
        }
        y=y/10;
        x=x/10;
    }
    if (diff == 1) {
        return true;
    }
    return false;
}

void solve() {
    /*** calculate primes in range ***/
    int a, b;
    scanf("%d%d", &a, &b);
    //calculate primes upto sqrt of b
    vector<int> primeb;
    bool arr[b + 1];
    for(int i=0; i*i<=b; i++) {
        arr[i] = true;
    }

    arr[0] = arr[1] = false;
    for (int i=2; i*i<=b; i++) {
        if (arr[i] == true) {
            for (int j=2*i; j*j<=b; j+=i) {
                arr[j] = false;
            }
        }
    }
    for (int i=0; i*i<=b; i++) {
        if (arr[i]) {
            primeb.push_back(i);
        }
    }
    //
    vector<int> result;
    result.push_back(a);
    bool arr1[b-a+1];
    for (int i=0; i<=b-a; i++) {
        arr1[i] = true;
    }
    arr1[0] = arr1[1] = false;
    for (int i=0; i<primeb.size(); i++) {
        for(int j = (a/primeb[i])*primeb[i]; j<=b; j+=primeb[i]) {
            if (j >= a) {
            arr1[j-a] = false;
            }
        }
    }
    for (int i=0; i<=b-a; i++) {
        if (arr1[i]) {
            result.push_back(i+a);
        }
    }
    //
    int ans=0;
    int i = 0;
    int v = result[result.size()-1];
    for (int u = result[0]; v >=u;) {
        if(check(v, u)) {
            cout << u << "\t" << v;
            cout << endl;
            if(u==v){ 
                break;
            }
            ans++;
            v = u;
            u = result[0];
            i = 0;
        }
        else {
            i++;
            u = result[i];
        }
    }
    cout << ans << endl;
        
}

int main() {
    int t;
    scanf("%d\n", &t);
    while(t--) {
        solve();
    }
    return 0;
}
