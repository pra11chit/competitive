#include <bits/stdc++.h>
using namespace std;

int leap[12] = {3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2, 3};
int arr[2400][12];

bool calculate(int m, int y) {
    int year = y;
    y=y-1;
    int odd_day = 0;
    if (y>400) {
        y = y%400;
    }
    if(y>100) {
        odd_day = (odd_day + 5*(y/100))%7;
        y = y%100;
    }
    if(y>=0){
        odd_day = (odd_day + (y/4)*2 + (y-y/4))%7;
    }

    if (year%100==0 && year%400==0 && m > 2) {
        for (int i=0; i<=m-2; i++) {
            odd_day += leap[i];
        }
        odd_day = (odd_day + 1)%7;
    }
    else if(year%4==0 && m > 2){
        for (int i=0; i<=m-2; i++) {
            odd_day += leap[i];
        }
        odd_day = (odd_day + 1)%7;
    }
    else
    {
        for (int i=0; i<=m-2; i++) {
            odd_day += leap[i];
        }
        odd_day = odd_day%7;
    }

    int ans = 5 - (odd_day+1) + 1;
    int friday_date = ( ans > 0 ? ans : 7 + ans);
    int first_day = (odd_day + 1)%7;
    int sunday_date; 
    if (7 - first_day + 1 > 7) {
        sunday_date = 1;
    }
    else
    {
        sunday_date = 7 - first_day + 1;
    }
    
    sunday_date = sunday_date + 14;
    if (((year%100==0 && year%400==0) || year%4==0) && m==2) {
        if (sunday_date + 14 <= 29) {
            sunday_date += 7;
        }
    }
    else{
        if (sunday_date + 14 <= leap[m-1] + 28) {
            sunday_date += 7;
        }
        else
        {
            sunday_date = sunday_date;
        }
        
    }
    
    if (friday_date + 10 > sunday_date) {
        // cout << "month is: " << m << endl;
        // cout << "year is: " << y << endl;
        // cout << "friday is: " << friday_date << endl;
        // cout << "sunday is: " << sunday_date << endl;
        arr[y][m-1] = 1;
        return true;
    }
    else{
        return false;
    }
}

int answer (int& count, int m1, int y1, int m2, int y2) {
    for (int mo = m1, ye = y1;; mo++){
        if ((mo == m2 + 1 && ye == y2) || (ye == y2+1 && mo == 1)) {
            return count;
        }
        if(calculate(mo, ye)) {
            count++;
        } 
        if (mo == 12) {
            ye++;
            mo = 0;
        }
    }
}

void solve() {
    int m1, m2, y1, y2;
    scanf("%d%d%d%d", &m1, &y1, &m2, &y2);
    int count = 0;
    int fin = 0;

    if(y2-y1 >= 2400) {
        fin  = ((y2-y1)/2400)*answer(count, m1, y1, m1, y1 + 2400);
        if(m1!=12) {
            for (int j=0; j<= y2%2400 - 1; j++) {
                for (int i = m1; i<= 11; i++) {
                    fin = fin + arr[i][j];
                }
            }
        }
        else{
            for (int j=1; j<= y2%2400 - 1; j++) {
                for (int i = 0; i<= 11; i++) {
                    fin = fin + arr[i][j];
                }
            }
        }
    }
    else{
        fin = answer(count, m1, y1, m2, y2);
    }
    
    cout << fin << endl;
}

int main() {
    ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
    scanf("%d", &t);
    while(t--) {
        solve();
    }
    return 0;
}