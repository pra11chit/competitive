//Algorithm 1: StraightForward
#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0;
    for(int a = 0; a < n; ++a) {
        int sum = 0;
        for(int b = a; b < n; ++b) {
            sum += array[b];
            best = max(best, sum);
        }
    }
    cout << best << "\n";
    return 0;
}

//Algorithm 2: Kadane's Algorithm
//O(n) time
//Idea: to calculate for each array position, max subarray sum that ends at that position

#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int array[] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int best = 0, sum = 0;
    for(int k = 0; k < n; ++k) {
        sum = max(array[k], sum + array[k]);
        best = max(best, sum);
    }
    cout << best <<"\n";
}
