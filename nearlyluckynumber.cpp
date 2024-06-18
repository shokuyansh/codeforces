#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int count=0;
    string s_n=to_string(n);
    for(char c:s_n)
    {
        if (c=='4'||c=='7')
        {
            count++;
        }
        
    }
    if(count==4||count==7)
    {
        cout<<"YES";
    }
    else
    {    cout<<"NO";
    }
}