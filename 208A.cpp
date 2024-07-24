#include<iostream>
#include<string>
using namespace std;
int main()
{
    string dubmix;
    cin>>dubmix;
    
    for(int i=0;i<dubmix.length();i++)
    {
        if(dubmix[i]=='W' && dubmix[i+1]=='U'&& dubmix[i+2]=='B')
        {
            i=i+2;
        }    
        else
        {    cout<<dubmix[i];
                if(dubmix[i+1]=='W' && dubmix[i+2]=='U'&& dubmix[i+3]=='B')
                    cout<<" ";
        }
    }
 
}