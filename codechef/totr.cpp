#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    string byteLang;
    cin >> byteLang;
    for (int i = 0; i<n; i++) {
        string str;
        cin >> str;
        for (int i=0; i<str.size(); i++) {
            //lowercase
            if (str[i] >= 'a' && str[i] <= 'z') {
            cout << byteLang[str[i] - 'a'];
            }
            //uppercase
            else if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", byteLang[str[i] - 'A'] - 32);
            }
            //'_'
            else if(str[i] == '_') {
            cout << " ";
            }
            else {
                cout << str[i];
            }
        }
        cout << endl;
    }
    return 0;
}
