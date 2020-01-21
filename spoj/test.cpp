#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 40;
    int d = 3;
    for (int i = a; i <= b; ++i) {
            int temp = i;
            while (temp > 0) {
                if (temp % 10 == d) {
                    cout << i << endl;
                    break;
                }
                temp = temp/10;
            }
    }
    return 0;
}