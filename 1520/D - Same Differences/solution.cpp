#include <iostream>
#include <map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        map<int, long long> freq;
        long long ans = 0;
 
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            int val = x - i;      // 0-based indexing
            ans += freq[val];
            freq[val]++;
        }
 
        cout << ans << "
";
    }
 
    return 0;
}