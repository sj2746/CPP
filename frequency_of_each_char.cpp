#include<iostream>
#include<string>
using namespace std;

void frequency(string str)
{
    for(int i=0;i<str.length();i++)
    {
        bool visited=false;

        for(int k=0;k<i;k++)
        {
            if(str[i]==str[k])
            {
                visited=true;
                break;
            }
        }

        if(!visited)
        {
            int count=1;

            for(int j=i+1;j<str.length();j++)
            {
                if(str[i]==str[j])
                    count++;
            }

            cout<<str[i]<<" "<<count<<endl;
        }
    }
}

int main()
{
    string str;
    getline(cin,str);

    frequency(str);

    return 0;
}