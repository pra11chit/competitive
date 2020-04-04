#include <bits/stdc++.h>
using namespace std;

double interstRate(double price, double monthlyPayment, int loanTerm) {
       double low = 0.00;
       double high = 1.00;
       double mid = 0.00;
       for (int i = 0; i < 600; i++) {
           mid = (low + (high - low)/2.0f);
	   cout << "mid is " << mid << endl;
           if (pow(1 + mid, loanTerm/12.0f) <= (loanTerm*monthlyPayment)/(price)) {
               low = mid;
	       cout << "low is " << low << endl;
            }
            else {
                high = mid;
		cout << "high is " << high << endl;
            }
        }
       return low;
}

int main() {
    double price, monthlyPayment;
    int loanTerm;
    scanf("%lf%lf%d", &price, &monthlyPayment, &loanTerm);
    printf("%lf", interstRate(price, monthlyPayment, loanTerm));
    return 0;
}
