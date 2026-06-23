/*
n=5
OUTPUT:
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    cout<<"Square :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<"________________________________________________________________________"<<endl;


    cout<<"Triangle :"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<"________________________________________________________________________"<<endl;


    //For DESCREASING TRIANGLE same but only change No of rows From Increasing to Decresing order
    cout<<"Descreasing Triangle :"<<endl;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<"________________________________________________________________________"<<endl;

    
    return 0;
}