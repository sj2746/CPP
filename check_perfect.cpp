#include<iostream>
using namespace std;

bool isPerfect(int n)
{
    int sum=0;

    for(int i=1;i<n;i++)
    {
        if(n%i==0)
            sum=sum+i;
    }

    if(sum==n)
        return true;

    return false;
}

int main()
{
    int n;
    cin>>n;

    if(isPerfect(n))
        cout<<"Perfect Number";
    else
        cout<<"Not Perfect Number";

    return 0;
}