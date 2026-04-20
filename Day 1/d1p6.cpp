/*Level 1: Basic Traversal (for / while)

Focus: getting comfortable with loop boundaries (0 → n-1)

Print numbers from 1 to n
Print numbers from n to 1
Print all even numbers from 1 to n
Print all odd numbers from 1 to n
Print the first n multiples of a number k

👉 Goal: You should instinctively know when to start from 0 vs 1.*/

#include<iostream>
using namespace std;

void one_to_n(){
    int n;
    cout << "Enter a number to print nos:" << endl;
    cin >> n;
    cout << "The numbers from 1 to "<< n <<" are : "<<endl;
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
}

void n_to_one(){
    int n;
    cout << "Enter a number to print nos:" << endl;
    cin >> n;
    cout << "The numbers from "<< n <<" to 1 are : "<<endl;
    for(int i=n;i>=1;i--){
        cout << i << " ";
    }
}
void even_nos(){
    int n;
    cout << "Enter a number to print even nos:" << endl;
    cin >> n;
    cout << "The numbers from 1 to "<< n <<" which are even are : "<<endl;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout << i << " ";
        }
        
    }
}
void odd_nos(){
    int n;
    cout << "Enter a number to print odd nos:" << endl;
    cin >> n;
    cout << "The numbers from 1 to "<< n <<" which are odd are : "<<endl;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout << i << " ";
        }
        
    }
}
void n_multiples(){
    
}
int main(){
    int choice;
    while(choice!=6){
    cout << "\n 1. Print numbers from 1 to n \n " ;
    cout << "\n 2. Print numbers from n to 1 \n " ;
    cout << "\n 3. Print all even numbers from 1 to n \n " ;
    cout << "\n 4. Print all odd numbers from 1 to n \n " ;
    cout << "\n 5. Print the first n multiples of a number k \n " ;
    cout << "\n 6. EXIT \n"; 
    cout << "Enter Your Choice : \n";
    cin >>choice;
    if (choice == 1){
        one_to_n();
    }else if(choice == 2){
        n_to_one();
    }else if(choice == 3){
        even_nos();
    }else if(choice == 4){
        odd_nos();
    }else if(choice == 5){
        n_multiples();
    }else if(choice == 6){
        break;
    }else{
        cout << "\n Enter Valid Choice !!";
    }
    }
    return 0;   
}