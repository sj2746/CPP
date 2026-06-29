#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> whole_num={0,1,2,3,4,5,6,7,8};
    vector<char> fruits;

    //SIZE
    cout<<"Size of Whole numbers is :"<<whole_num.size()<<endl;


    cout<<endl;
    cout<<endl;
    //PUSH
    
    whole_num.push_back(10);
    
    cout<<"The numbers after push_back are :"<<endl;
    for(int val:whole_num){
        cout<<val<<" ";
    }


    cout<<endl;
    cout<<endl;
    //POP
    
    whole_num.pop_back();
    
    cout<<"The numbers after pop_back are :"<<endl;
    for(int val:whole_num){
        cout<<val<<" ";
    }

    cout<<endl;
    cout<<endl;

    //FRONT(first element)
    cout<<"The Front value is: "<<whole_num.front();

    cout<<endl;
    cout<<endl;

    //BACK(last element)
    cout<<"The Back value is: "<<whole_num.back();


    cout<<endl;
    cout<<endl;
    //'at' Function returns the value at index passed

    cout<<"Value at index 3 is :"<<whole_num.at(3);
    
    
}