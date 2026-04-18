#include <iostream>
using namespace std;
int main(){
    int ct=0;
    int arr[]={15,27,47,19,73,12,54,76};
    for(int i=0;i<8;i++){
        if (arr[i]%2==0){
            ct++;
        }
    }
    cout << ct;
    return 0;
}