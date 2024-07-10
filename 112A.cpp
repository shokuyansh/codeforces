#include<iostream>
#include<string>
using namespace std;
int main()
{
    string p1;
    cin>>p1;
    string p2;
    cin>>p2;
    int flag=0;
    for(int i=0;i<p1.length();i++)
    {
        for(int j=i;j<p2.length();j++)
        {
            if(towlower(p1[i])>tolower(p2[j]))
            {
                
                flag+=1;
                break;

            }
            else if(towlower(p1[i])<tolower(p2[j]))
            {
               
               flag+=-1;
                break;
            }
            else if(towlower(p1[i])==tolower(p2[j]))
            {    
                
                flag+=0;
                break;
            
            }
        }
    
    }
    if(flag==0)
        cout<<0;
    else if(flag<0)
        cout<<-1;
    else if(flag>0)
    {
        cout<<1;
    }

}