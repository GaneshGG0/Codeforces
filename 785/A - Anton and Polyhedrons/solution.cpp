#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if (a =="Tetrahedron"){
            count +=4;
        }
        else if (a=="Cube"){
            count +=6;
        }
        else if (a=="Octahedron"){
            count +=8;
        }
        else if (a=="Dodecahedron"){
            count+= 12;
        }
        else {
            count+= 20;
        }
    }
    cout<< count<<endl;
}