//Program to perform arithmetic operations

#include <iostream>
#include <cmath>//used for fmod
using namespace std;

int main(){
    float n1,n2;
    cout << "Enter number 1:";
    cin >> n1;
    cout << "Enter number 2:";
    cin >> n2;
    cout << "Sum of "<< n1 << " and "<< n2 <<" is: "<< n1+n2<<endl;
    cout << "Difference of "<< n1 << " and "<< n2 <<" is: "<< n1-n2<<endl;
    cout << "Multiplication of "<< n1 << " and "<< n2 <<" is: "<< n1*n2<<endl;
    if(n2==0)
    {
        cout<<"Division Not Possible"<<endl;
    }
    else
    {
        cout << "Division of "<< n1 << " and "<< n2 <<" is: "<< n1/n2 << endl;
    }
    cout << "Remainder of "<< n1 << " and "<< n2 <<" is: "<< fmod(n1,n2) <<endl;
    return 0;
}