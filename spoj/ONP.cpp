#include <iostream>
#include <stack>
using namespace std;

void transform(stack<char> str, stack<char> str1) {
    int size = str.size();
    for (int a = 0; a < size; ++a) {
        cout << str.top();
        str.pop();
    }
    int size1 = str1.size();
    for (int b = 0; b < size1; ++b) {
        cout << str1.top();
        str1.pop();
    }
}

int main () {
    int T;
    cin >> T;
    while (T > 0)
    {
        stack<char> str, str1;
        string ex;
        cin >> ex;
        int i = ex.size() - 1;
        while(i >= 0) {
            if (ex[i] != ')' && ex[i] != '(') {
                if (ex[i] != '+' && ex[i] != '-' && ex[i] != '*' && ex[i] != '/' && ex[i] != '^') {
                str.push(ex[i]);
                }
                else
                {
                    str1.push(ex[i]);
                }
            }

            i--;
        }
        transform(str, str1);
        T--;
    }
    
    return 0;
}