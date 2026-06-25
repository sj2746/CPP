#include<iostream>
using namespace std;
int main(){
    int arr[5]={67,90,45,88,14};
    int n=5,largest=arr[0],secLarge=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secLarge=largest;
            largest=arr[i];
        }else if(arr[i]>secLarge && arr[i]!=largest){
            secLarge=arr[i];
        }
    }
    cout<<"The Largest Element in the array is :"<<largest<<endl;
    cout<<"The Second largest Element in the array is :"<<secLarge;
    return 0;
}