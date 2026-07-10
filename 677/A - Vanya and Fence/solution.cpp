#include <iostream>
using namespace std;
int main (){
    int n,h;
    cin >> n >> h;
    int width =0 ;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        if (a<h) {
            width += 1;
        }
        else if (a>h){
            width += (a+h-1)/h;
        }
        else {
            width +=1;
        
 
    }
}
    cout << width<<endl;
}