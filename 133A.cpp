#include<iostream>
#include<string>
using namespace std;

int main()
{
    string p;
    cin>>p;
    int length=p.length();
    bool found=false;
    
   
        for(char c:p)
        {   
                if(c=='H'||c=='Q'||c=='9')
                {
                    found=true;
                    
                }
         }
    
    

    if(found==true)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
   
}