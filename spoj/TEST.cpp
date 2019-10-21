//https://www.spoj.com/problems/TEST/
#include <iostream>
using namespace std;

int main() {
    int number;
    while(cin >> number) {
        if(number == 42) {
            break;
        }
        cout << number <<endl;
    }
    return 0;
}

