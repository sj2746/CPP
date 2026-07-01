#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(13);
    v.push_back(70);
    for(int i:v){
        cout<< i<<" ";
    }
    return 0;
}