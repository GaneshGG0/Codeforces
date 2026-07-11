#include <iostream>
#include <string>
using namespace std;
 
int main (){
    int t;
    cin>>t;
    string a = "codeforces";
    while (t--){
        string c;
        int count=0;
        cin>>c;
        for (int i=0;i<10;i++){
            if (c[i]!=a[i]){
                count++;
            }
        }    
        cout<<count<<endl;
    }
}