//Reverse Array with creating new array
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr1[n]={};//INITIALISED ARRAY  CANNOT BE LEFT BLANK
    int j=0;
    for(int i=n-1;i>=0;i--){
        arr1[j]=arr[i];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}