//Explorin Data Types

#include <iostream>
using namespace std;
int main(){
    int a=10; //Integer

    float b=19; //Float

    char d[]="Sajan";           //cout << d = Sajan and d[1]=a
    
    bool r=true;                //Boolean

    string name="Sajan Bhat";
    string frnd;

    cout << a <<" "<< b <<" "<< d[1];
    for (int i=0;i<5;i++){
        cout << " "<< d[i] ;
    }
    cout <<"\n Boolean value "<< r;                  //Output 1 means TRUE
    cout << "\n "<< name <<endl; //return Sajan Bhat
    cout << "\n Size is :"<< name.size() ; //returns 10
    cout << "\n Enter friend name: "<<endl;
    cin >> frnd;
    cout <<"\n Friend name is : "<<frnd <<endl;
    for (int i=name.size();i>=0;i--){
        cout << name[i] ;
    }
    return 0;
}