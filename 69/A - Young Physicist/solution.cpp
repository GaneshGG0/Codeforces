#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    int a,b,c;
    int sumx=0;
    int sumy=0;
    int sumz=0;
    for (int i=0;i<t;i++){
        //int a,b,c =0;
        cin>>a>>b>>c;
        sumx+=a;
        sumy+=b;
        sumz+=c;}
        if (sumx==0 && sumy==0 && sumz==0){
            cout<<"YES
";
        }
        else{
            cout<<"NO
";
        }
 
 
 
}