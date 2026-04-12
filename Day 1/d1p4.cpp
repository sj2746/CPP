//Program to display first 10 natural numbers using for,do..while and while loops

#include <iostream>

using namespace std;

int main()
{
    int n=10;
    
    //Printing using for loop
    cout << "The First 10 Natural Numbers using *for loop* : ";
    for (int i=1; i<=n; i++)
    {
        cout << i << " ";
    }
    cout <<endl;

    //Printing using while loop
    cout << "The First 10 Natural numbers using *while loop* : ";
    int x=1;
    while(x<=10)
    {
        cout << x << " ";
        x++;
    }
    cout <<endl;


    //Printing using do-while loop
    cout << "The First 10 Natural numbers using *do while loop* : ";
    int y=1;
    do{
        cout << y << " ";
        y++;
    }while(y<=10);
    
    return 0;
}