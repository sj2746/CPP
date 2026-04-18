//Count even numbers

#include <iostream>
using namespace std;
int main(){
    int arr[]={45,87,98,89,88,36},count=0;
    int n=sizeof(arr)/sizeof(arr[0]);  //A new way to get no of elements in array
    cout << "The numbers that are even are: ";
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout << arr[i]<< " ";
            count++;
        }
    }
    cout << "\n Count is :" << count;
    return 0;
}
