//Program to find the area of a Square, Rectangle, circle

#include<iostream>

const float pi=3.14;  /// Used constant 
using namespace std;

int main(){
    float side,rect_l,rect_b,cir_rad;   //can take any variables
    cout << "__________________________________________________________" << endl;
    cout << "-----------------FINDING AREA OF SQUARE-------------------" << endl;
    cout << "__________________________________________________________" << endl;
    cout << "Enter the side of a square :" ;
    cin >> side;
    cout << "The area of Square is: "<< side * side << endl;

    cout << "__________________________________________________________" << endl;
    cout << "-----------------FINDING AREA OF RECTANGLE----------------" << endl;
    cout << "__________________________________________________________" << endl;
    cout << "Enter the length of a Rectangle :" ;
    cin >> rect_l;
    cout << "Enter the breadth of a Rectangle :" ;
    cin >> rect_b;
    cout << "The area of Rectangle is: "<< rect_l * rect_b<< endl;

    cout << "__________________________________________________________" << endl;
    cout << "-----------------FINDING AREA OF CIRCLE----------------" << endl;
    cout << "__________________________________________________________" << endl;
    cout << "Enter the radius of a Circle :" ;
    cin >> cir_rad;
    cout << "The area of Circle is: "<< pi * cir_rad * cir_rad << endl;

    return 0;
}