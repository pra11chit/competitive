#include <bits/stdc++.h>
using namespace std;

int gcd(long numer, int denom) {
    if (denom == 0) {
        return numer;
    }
    else
    {
        return gcd(denom, numer%denom);
    }
}

int main() {
    int t;
    cin >> t;
    for (int a = 0; a < t; ++a) {
        string number;
        cin >> number;
        string one;
        string two;
        int dec_index = 0;
        for (int i = 0; i <= number.length() - 1; i++ ) {
            if (number[i] == '.') {
                dec_index = i;
            }
        }
        if (dec_index == 0) {
            cout << 1 << endl;
            continue;
        }
        for (int i = 0; i <= dec_index - 1; ++i) {
            one.push_back(number[i]);
        }
        for (int j = dec_index + 1; j <= number.length() - 1; ++j) {
            two.push_back(number[j]);
        }

        int dec = two.length();
        string three = one + two;
        long num = stoi(three);
        cout << pow(10, dec)/gcd(num, pow(10, dec)) << endl;

    }
    return 0;
}