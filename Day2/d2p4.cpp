//Swapping two numbers

#include <iostream>

using namespace std;

int main(){

    int num,last_dig1,last_dig2,newNum;

    cout << "Enter a number: ";
    cin >> num;
    cout<< "Before Swapping : "<< num;
    last_dig1=num%10;  
    newNum=num/10;

    last_dig2=newNum%10;
    
    newNum=newNum/10;
    cout<< "After Swapping : "<< newNum<<last_dig1<<last_dig2;


    return 0;
}