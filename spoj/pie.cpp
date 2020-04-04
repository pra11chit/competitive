#include <bits/stdc++.h>
using namespace std;

int pie(double mid, int f, double* arr1, int n) {
    int count = 0;
    if (mid == 0) return 0;
    for(int i=0; i<n; i++) {
        count = count + floor(arr1[i]/mid);
            if(count >= f) {
                return 1;
            }
    }
    return 0;
}

void solve() {
    int n, f;
    scanf("%d%d", &n, &f);
    f++;
    int arr[n];
    double arr1[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        arr1[i] = acos(-1) * arr[i] * arr[i];
    }
    double left = 0.00;
    double right;
    if(n > f) {
        right = arr1[n-f];
    }
    else{
        right = arr1[0];
    }
    double ans = 0.00;
    double mid;
    while(right-left>=1e-6) {
        mid = left + (right-left)*0.5;
        if(pie(mid, f, arr1, n)==1) {
            if(mid > ans) {
                ans = mid;
                left = mid;
            }
        }
        else{
            right = mid;
        }
    }
    printf("%.4f\n",ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}