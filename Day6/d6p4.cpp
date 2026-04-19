//Find maximum element

#include <iostream>
using namespace std;
int main(){
    int arr[]={45, 78, 99, 54, 857};
    int max=arr[0];
    for(int i=0; i<5; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    cout << "Maxmim element is :" <<max;
    return 0;
}
