//Exploring data types

#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    long double a=10.01111111112;


    cout << fixed<< setprecision(15)<<a;//used to print exact decimals(use iomanip)

    return 0;
}