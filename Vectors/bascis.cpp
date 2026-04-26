#include<iostream>
#include<vector>
#include<bits/stdc++.h> //used for CP

using namespace std;

int main(){
    vector<int> v={4,2,7,1};
    sort(v.begin(),v.end());

    for (int x:v){
        cout << x << " ";
    }

    cout << "ANS:" << v.at(2);
    cout << v.front();
    return 0;
}