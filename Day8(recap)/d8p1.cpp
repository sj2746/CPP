/*For each problem:

Try yourself (at least 20–30 mins)
If stuck → see hint (NOT solution)
Still stuck → see solution
Close it and re-code without seeing
*/

//simple use of function
#include<iostream>
using namespace std;
int square(int x){
    return x*x;
}
int main(){
    int n,x;
    cin >>n;
    cout << square(n);
    return 0;
}