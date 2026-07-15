#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    int c = 0, ans = 0;
    while (t--) {
        int a, b;
        cin >> a >> b;
        c -= a;
        c += b;
        ans = max(ans, c);
    }
 
    cout << ans << '
';
    return 0;
}