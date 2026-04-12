//Swap two numbers

#include<iostream>

using namespace std;

int main(){
    
    int a=10,b=30;
    int temp;
    cout << "Before Swapping "<<a<<" "<<b<< endl; 
    temp=a;
    a=b;
    b=temp;
    cout << "After Swapping "<<a<<" "<<b<< endl; // a=30 and b=10

    a=a+b; // a=40
    b=a-b; // b= 40-10 =30
    a=a-b; //
    cout << "Re Swapping without temp"<<a<<" "<<b<< endl;
    return 0;
}