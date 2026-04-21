#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int maxi=arr[0];
    for(int i=1;i<=4;i++){
        if (arr[i]>maxi) maxi=arr[i];
    }
    cout << maxi ;
    return 0;
}