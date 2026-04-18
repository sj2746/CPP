//Sum of array

#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
    int arr[100], i;

    cout << "Enter size : \n";
    cin >> n; 
    cout << "Enter elements : \n";
    for(i=0; i<n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }

    cout << "Sum is :"<<sum;
    return 0;
}