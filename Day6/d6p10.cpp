//Reversing a string
#include <iostream>
#include <algorithm>

using namespace std;
int main(){

    string name="Sajan";
    reverse(name.begin(),name.end());
    cout << name;
    return 0;
}