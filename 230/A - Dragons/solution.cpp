#include <bits/stdc++.h> // understood
using namespace std;// understood
 
int main() {// understood
    int s, n;// understood
    cin >> s >> n;// understood
 
    vector<pair<int, int>> dragons;// understood
 
    for (int i = 0; i < n; i++) {// understood
        int x, y;// understood
        cin >> x >> y;// understood
        dragons.push_back({x, y});// understood
    }
 
    sort(dragons.begin(), dragons.end());// understood
 
    for (auto x : dragons) {// understood
        if (s > x.first) {// understood
            s += x.second;// understood
        } else {// understood
            cout << "NO";// understood
            return 0;// understood
        }
    }
 
    cout << "YES";// understood
    return 0;// understood
}