#include <bits/stdc++.h>
using namespace std;
int first_digit(int i) {
    while(i > 9) {
        i = (i - i%10)/10;
    }
    return i;
}
int main() {
    int n;
    cin >> n;
    int arr[10][10];
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i=1; i<=n ; i++) {
        (arr[i%10][first_digit(i)])++;
    }
    int ans = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            ans += arr[i][j] * arr[j][i];
        }
    }
    printf("%d\n", ans);
    return 0;
}