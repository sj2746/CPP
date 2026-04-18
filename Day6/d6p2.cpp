//Print all elements of an array

#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout << "Enter size :  \n ";
    cin >> n;
    cout << "Enter elements : \n";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Array elements are : \n";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}