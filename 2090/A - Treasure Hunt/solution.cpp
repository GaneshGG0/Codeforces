#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;
 
        long long target = a + 1;
        long long cycle = x + y;
 
        long long full = (target - 1) / cycle;
        long long dug = full * cycle;
 
        if (dug + x >= target)
            cout << "NO
";
        else
            cout << "YES
";
    }
 
    return 0;
}