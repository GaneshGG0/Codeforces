#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector <int> v;
    for (int i=0;i<500;i++){
        if ((i*(i+1)/2) == n){
            v.push_back(n);
        }
        else {
            continue;
        }
    }
    for (int x : v) {
        if (x==n){
            cout <<"YES
";
            break;
        }
        else if (x!=n){
            cout<<"NO
";
            break;       
        }
        else{
            continue;
        }
 
    }
    if (v.empty()){
        cout << "NO
";
    }
 
}