//Percentage Calculator by asking input

#include <iostream>

using namespace std;

int main(){
    float m1,m2,m3,m4,m5,total,avg;
    cout << "Enter marks for Subject 1 "<<endl;
    cin>>m1;

    cout << "Enter marks for Subject 2 "<<endl;
    cin>>m2;

    cout << "Enter marks for Subject 3 "<<endl;
    cin>>m3;

    cout << "Enter marks for Subject 4 "<<endl;
    cin>>m4;

    cout << "Enter marks for Subject 5 "<<endl;
    cin>>m5;

    total=m1+m2+m3+m4+m5;

    avg=total/5;

    cout << "__________RESULTS_____________" <<endl;
    cout << "Subject 1: " << m1 << endl;
    cout << "Subject 2: " << m2 << endl;
    cout << "Subject 3: " << m3 << endl;
    cout << "Subject 4: " << m4 << endl;
    cout << "Subject 5: " << m5 << endl;
    cout << "Total is : " << total <<endl;
    cout << "Average is:" << avg << endl;
    if (avg > 90 ){
    cout << "Grade is:   A " << endl;
    }
    else if(avg >= 75 && avg < 89){
    cout << "Grade is:   B " << endl;
    }
    else if(avg > 50 && avg < 74){
    cout << "Grade is:   C " << endl;
    }
    else
    {
    cout << "Grade is:   F " << endl;
    }
    return 0;
}