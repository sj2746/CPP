#include <iostream>

using namespace std;

void debit( float deb,float current_bal){
    if(current_bal-deb<500){
        cout << "Minimum Balance is needed in Account." <<endl;
    }else{
        current_bal=current_bal-deb;
        cout << "Balance Updated" << endl;
}
}
float credit(float current_bal, float amt){
    if (amt>1000000){
        cout << "Must be less than 10 Lakhs." << endl;
        cout << "Transaction Failed..." << endl;
    }
    else{
        current_bal=current_bal+amt;
        cout << "Balance Updated" << endl;
    }
    return current_bal;

}
int main(){
    float password=1234;
    float balance=9000.00;
    float current_bal=1000;
    int option=0;
    

    while ( option != 4){
        cout << "_______MENU_______" << endl;
        cout << "1. DEBIT AMOUNT" << endl;
        cout << "2. CREDIT AMOUNT" <<endl;
        cout << "3. CHECK BALANCE" <<endl;
        cout << "4. EXIT" <<endl;
        cout << "ENTER YOUR CHOICE :" <<endl;
        cin >> option;
        switch (option)
        {
        case 1:
            float debit_amount;
            cout<< "Enter amount you want to debit:" << endl;
            cin>>debit_amount;
            debit(debit_amount,current_bal);
            cout << current_bal <<endl;
            break;
        
        case 2:
            float credit_amt;
            cout << "Enter the amount you want to add in machine..."<<endl;
            cin>>credit_amt;
            if (credit_amt<1 ){
                cout << "Must be more" << endl;
            }
            else
            {
                float credit_amt=credit(credit_amt,current_bal);
                cout << "Rs. "<<credit_amt<< " Credited Successfully"<<endl;
            }
            break;
        case 3:
            cout << "________BALANCE__________" <<endl;
            cout << "CURRENT BALANCE: "<<current_bal <<endl;
            break;
        case 4:
            cout<< "Exiting..." <<endl;
            cout <<"Thank You Visit Again....."<<endl;
            break;
        }
    }
    return 0;
}