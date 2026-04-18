//Imagine there are two room namely 'A' and 'B' and there is a vaccum robot that is used to clean rooms so a simple code to demostarte its function.


# include <iostream>
using namespace std;
void room1_clean(){
    cout << "Room 1 Cleaning....... \n";
    cout << "Room 1 is Cleaned \n";
}
void room2_clean(){
    cout << "Room 2 Cleaning....... \n";
    cout << "Room 2 is Cleaned \n";
}
int main(){
    char room1_status,room2_status;         //Assuming room is not clean
    cout << "Enter the Details here: \n";
    cout << "Is Room A Clean ? (Y/N): \n";
    cin >> room1_status;
    cout << "Is Room B Clean ? (Y/N): \n";
    cin >> room2_status;
    if ( room1_status=='y' || room1_status == 'Y'){
        cout << "Room 1 is Clean \n";
    } else{
        room1_clean();
    }
    if ( room2_status=='y' || room2_status == 'Y'){
        cout << "Room is Clean \n";
    } else{
        room2_clean();
    }
    return 0;
}