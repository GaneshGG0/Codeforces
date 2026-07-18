/* author - ganshgg0*/
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i=0;i<t;i++) {
        int n;
        cin >> n;
        int sum = 0;
        for (int i=0;i<n;i++) {
            int x;
            cin >> x;
            sum += x;
        }
        if (sum % 4 == 0) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
            }
    }
}