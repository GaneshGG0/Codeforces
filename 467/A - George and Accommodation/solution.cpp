#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int count=0;
    for (int i=0;i<n;i++) {
        int p,q;
        cin >> p >> q;
        if (p==q) {
            count +=0;
        }
        else if (q-p >= 2) {
            count +=1;
        }
        else {
            continue;
        }
    }
    cout << count << endl;
}