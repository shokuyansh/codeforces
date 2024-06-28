#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int j=0;j<s.length();j+=2)
    {
        for(int i=2+j;i<s.length();i+=2)
        {
            if(static_cast<int>(s[j])> static_cast<int>(s[i]))
            {    char c=s[i];
                s[i]=s[j];
                s[j]=c;
            }
        }
    }
        cout<<s;
}