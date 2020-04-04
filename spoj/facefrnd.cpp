#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
    set<int> fof;
    set<int> frend;
    vector<int> vec;
    for (int i=0; i<n; i++) {
        int x;
        scanf("%d\n", &x);
        frend.insert(x);
        int no;
        scanf("%d\n", &no);
        int y;
        while(no--) {
            scanf("%d\n", &y);
            vec.push_back(y);    
        }
    }
    for (int i=0; i<vec.size(); i++) {
        if (frend.count(vec[i]) == 0) {
            fof.insert(vec[i]);
        }
    }
    printf("%d\n", fof.size());
    }
    return 0;
}
