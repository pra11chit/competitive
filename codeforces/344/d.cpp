#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n=str.size();
    stack<char> sta;
    for(int i=0; i<n; i++){
        if (!sta.empty() && str[i] == sta.top()){
            sta.pop();
        }
        else{
            sta.push(str[i]);
        }
    }
    if(sta.empty()) {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}