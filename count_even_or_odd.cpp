#include<iostream>
using namespace std;

void countDigits(int n)
{
    int even=0,odd=0,d;

    while(n>0)
    {
        d=n%10;

        if(d%2==0)
            even++;
        else
            odd++;

        n=n/10;
    }

    cout<<"Even="<<even<<endl;
    cout<<"Odd="<<odd;
}

int main()
{
    int n;
    cin>>n;

    countDigits(n);

    return 0;
}