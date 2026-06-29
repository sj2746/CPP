#include<iostream>
using namespace std;

int fib(int num){
    int a=0,b=1;
    int c;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<=num;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
int main(){
    cout<<"The sum of digits of a number 1897 is :"<<fib(10);
}