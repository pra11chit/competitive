//https://atcoder.jp/contests/abc143/tasks/abc143_ahttps://atcoder.jp/contests/abc143/tasks/abc143_a
//Width of window: a
//two curtains each of width b
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a-2*b > 0) {
        cout << a-2*b;
    }
    else
        cout << 0;
    return 0;
}
