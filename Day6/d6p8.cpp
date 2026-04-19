#include<iostream>
using namespace std;
int main(){
    int arr[]={12, 87, 97, 79, 21};
    int mn=arr[0];
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        mn = min(mn, arr[i]);

    }
    cout << "Minimum element is : "<<mn;
}