//Reverse array (in-place)

#include<iostream>
using namespace std;
int main(){
    float arr[]={15,85,97,67,37,66};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-1; i>0; i--){
        cout << arr[i]<<" ";
    }
    return 0;
}