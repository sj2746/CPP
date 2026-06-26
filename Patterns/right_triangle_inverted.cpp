#include<iostream>
using namespace std;
int main(){
    int n=5;
    //For DESCREASING TRIANGLE same but only change No of rows From Increasing to Decresing order
    cout<<"Descreasing Right Triangle :"<<endl;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}

/*
OUTPUT:
Descreasing Right Triangle :
 *  *  *  *  * 
 *  *  *  * 
 *  *  * 
 *  * 
 * 
 
 */