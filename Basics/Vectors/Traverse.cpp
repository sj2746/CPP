#include <vector>
#include<iostream>

using namespace std;
int main(){
    vector<int> v;

    v.push_back(80);
    v.push_back(90);
    v.push_back(100);

    for (int x:v){
        cout << x << " ";
    }
    return 0;
}