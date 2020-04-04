#include <bits/stdc++.h>
using namespace std;

int first_digit(int a) {
    for (;a > 9;a = (a - a%10)/10);
    //cout << "first_digit " << a << endl;
    return a;
}

bool satis(int i, int j){
    if (i % 10 == first_digit(j)) {
        if (j % 10 == first_digit(i)) {
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int ans=0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if(satis(i, j)){
                //printf("(%d, %d)\n", i, j);
                ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}