#include <iostream>

using namespace std;
float debit( float amt, float bal){

    if (bal-amt < 500){
        cout << "\n Minimum balance Required... \n";
    }
    else{
        bal = bal-amt;
        cout << amt << ".RS Debited Successfully \n";
    }
    return bal;
}
int main(){
    int count=0;
    int option;
    double balance=5000;
    int acc_no=1234;
    int psrd=1234;
    int accno,pass;
    do{
        cout << "------------------WELCOME------------------ \n";
    cout << "\n \n ACCOUNT NUMBER: \n";
    cin >>accno;
    cout << "PASSWORD: \n";
    cin >> pass;
    if (accno== acc_no and pass==psrd){
    do{
        cout << "_____MENU______ \n";
        cout << "1.CREDIT \n";
        cout << "2.DEBIT \n";
        cout << "3.CHECK BALANCE \n";
        cout << "4.EXIT \n";
        cout << "Choose an option: \n";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "CURRENTLY THIS OPTION IS NOT AVALABLE...... \n";
            cout << "Please Visit Your Nearest Bank"<<endl;
            break;
        
        case 2:
            float deb_amt;
            cout << "Enter the amount you want to debit:";
            cin>>deb_amt;
            char confirm;
            cout << "ARE YOU SURE (Y/N): \n";
            cin >> confirm;
            if(confirm=='Y' || confirm == 'y'){
                balance=debit(deb_amt,balance);
            } 
            break;
        case 3:
            cout << "___________________________________ \n";
            cout << "CURRENT BALANCE :"<< balance <<endl;
            cout << "___________________________________ \n";
            break;
        case 4:
            cout << "EXITING.............." << endl;
            cout << "THANK YOU VISIT AGAIN" <<endl;
            count =10;
            break;
        default:
            cout << "Invalid Choice" <<endl;
            break;
        }
    }while ( option!=4);
    }
    else{
        cout << "INCORRECT ACC NO OR PASSWORD \n";
        cout << "Please Try AGAIN.....";
        count ++;
    }
    }while (count <5);
    return 0;
}