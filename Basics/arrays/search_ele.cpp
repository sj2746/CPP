#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={10, 20, 30, 40, 50};
    int search_ele=40;
    for(int i=0;i<n;i++){
        if (arr[i]==search_ele){
            cout<<"Element found at index :"<<i;
            return 0;
        }
    }
    cout<<"POSITION NOT FOUND";
    return 0;
}