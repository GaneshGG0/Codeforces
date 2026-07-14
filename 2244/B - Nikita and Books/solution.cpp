#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        long long need = 1;
        bool ok = true;
 
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < need) {
                ok = false;
                break;
            }
 
            long long extra = a[i] - need;
            a[i + 1] += extra;
            need++;
        }
 
        if (ok && a[n - 1] >= need)
            cout << "YES
";
        else
            cout << "NO
";
    }
}