#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double t;
    cin >> t;
 
    double sum = 0;
 
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        sum += a;
    }
 
    cout << fixed<< setprecision(12) << sum / t << endl;
}