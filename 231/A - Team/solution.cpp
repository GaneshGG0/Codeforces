#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    int count =0;
    for (int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        
        if ((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1)){
            count +=1;
        }
        else {
            continue;
        }
    }
    cout<<count;
 
}
 
 