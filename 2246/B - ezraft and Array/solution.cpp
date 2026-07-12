#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) {
        int n;
        cin >> n;
 
        if (n == 2) {
            cout << -1 << '
';
        } else if (n == 1) {
            cout << 1 << '
';
        } else {
            cout << 1 << " " << 2;
            long long x = 3;
            for (int i = 3; i <= n; i++) {
                cout << " " << x;
                x *= 2;
            }
            cout << '
';
        }
    }
 
    return 0;
}