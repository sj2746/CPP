#include<iostream>
#include<bits/stdc++.h>
//This is a function
using namespace std;
int main(){
    vector<int> v;
    v={10,60,40,20,97,35,47};
    v.push_back(76);
    v.pop_back();
    for(int i:v){
        cout << i << " ";
    }
}