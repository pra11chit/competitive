#include <bits/stdc++.h>
using namespace std;
vector<int> final;

void solve() {
    int n;
    cin >> n;
    char c;
    int no, show;
    int arr[4][4];
    for(int i=0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            arr[i][j] = 0;
        }
    }

    for (int i =0; i<n ;i++) {
        cin >> c >> no;
        if (c == 'A') {
            show = 0;
        }
        else if (c == 'B') {
            show = 1;
        }
        else if (c == 'C') {
            show = 2;
        }
        else {
            show = 3;
        }
        arr[show][no/3 - 1]++;
    }
    set<int> vis_s;
    set<int> vis_t;
    vector<int> vec;
    int ans = 0;

    for (int l = 0; l<4; l++) {
        int max = 0;
        int max_t, max_s;
        for (int i=0; i<4; i++) {
            for (int j =0; j<4;j++) {
                if (vis_s.count(i) == 0 && vis_t.count(j) == 0) {
                    if (arr[i][j]>= max) {
                        max = arr[i][j];
                        max_t = j;
                        max_s = i;
                    }
                }
            }
        }
        
        if (max > 0) {
            vis_s.insert(max_s);
            vis_t.insert(max_t);
            vec.push_back(arr[max_s][max_t]);
        }
    }

    for (int i = 0; i<(int)vec.size(); i++) {
        ans = ans + (vec[i])*(100 - i*25);
    }
    int loss_people = 0;
    for (int i=0; i<(int)vec.size(); i++) {
        loss_people += vec[i];
    }
    ans = ans - 100*(4 - (int)vec.size());
    cout << ans << endl;
    final.push_back(ans);
}

int main(){
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    int fin_ans = 0;
    for(int i = 0; i<(int)final.size(); i++) {
        fin_ans += final[i];
    }
    cout << fin_ans << endl;
    return 0;
}