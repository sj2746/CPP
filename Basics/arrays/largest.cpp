#include<iostream>
using namespace std;
int main(){
    int arr[5]={67,90,45,88,14};
    int n=5,largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"The largest Element in the array is :"<<largest;
    return 0;
}