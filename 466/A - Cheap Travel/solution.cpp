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
 
int main () {
    int n,m,a,b;
    //int costb,costa,costtotal;
    cin >> n >> m >> a >> b;
    int costa = n * a;
    int costb = ((n + m - 1) / m) * b;
    int costtotal = (n / m) * b + (n % m) * a;
 
    cout << min({costa, costb, costtotal})<< endl;
    return 0;
}