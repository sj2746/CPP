#include<iostream>
using namespace std;
int main(){
    int n=10;
    if(n%2==0){
        cout<<n<<"is an Even Number";
    }else if(n%2!=0){
        cout<<n<<"is an Odd Number";
    }else{
        cout<<"Wrong Input";
    }
    return 0;
}