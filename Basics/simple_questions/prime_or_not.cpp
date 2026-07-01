#include<iostream>
using namespace std;
int main(){
    bool prime=false;
    int n=29;
    if(n<2){
        cout<<n<<" is not a Prime Number";
        return 0;
    }else{
    for(int i=2;i<=int(n/2);i++){
        if(n%i==0){
            cout<<n<<" is not a Prime Number";
            return 0;
        }else{
            prime=true;
        }
    }
    }
    if(prime==true){
        cout<<n<<" is a Prime Number";
    }

}