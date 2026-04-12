//Star Patterns

#include <iostream>

using namespace std;
void square(){
        int n=5;
        for ( int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << " * ";
            } 
            cout << endl; 
        }
    }


void triangle(){
    int n=5;
    for (int i=1; i <=n ; i++){
        for(int j=1; j<=i; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}


int main(){

    cout<< "SQUARE"<<endl;
    square();

    cout<<endl;

    cout<< "TRIANGLE"<<endl;
    triangle();
    return 0;
}