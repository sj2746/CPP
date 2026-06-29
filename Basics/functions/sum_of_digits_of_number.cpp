#include<iostream>
using namespace std;

int sum_of_dig(int num){
    int sum=0;
    int n;
    while(num>0){
       n=num%10;
       sum+=n;
       num/=10;
    }
    return sum;
}
int main(){
    cout<<"The sum of digits of a number 1897 is :"<<sum_of_dig(1897);
}