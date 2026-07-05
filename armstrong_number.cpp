#include<iostream>
using namespace std;

bool isArmstrong(int n)
{
    int temp=n,sum=0,d;

    while(temp>0)
    {
        d=temp%10;
        sum=sum+d*d*d;
        temp=temp/10;
    }

    if(sum==n)
        return true;

    return false;
}

int main()
{
    int n;
    cin>>n;

    if(isArmstrong(n))
        cout<<"True";
    else
        cout<<"False";

    return 0;
}