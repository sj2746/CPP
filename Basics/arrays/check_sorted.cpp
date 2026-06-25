#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Array is not Sorted";
            return 0;
        }
    }
    cout<<"Array is Sorted";
    
}